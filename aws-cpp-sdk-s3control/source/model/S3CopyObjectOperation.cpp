/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/s3control/model/S3CopyObjectOperation.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Control
{
namespace Model
{

S3CopyObjectOperation::S3CopyObjectOperation() : 
    m_targetResourceHasBeenSet(false),
    m_cannedAccessControlList(S3CannedAccessControlList::NOT_SET),
    m_cannedAccessControlListHasBeenSet(false),
    m_accessControlGrantsHasBeenSet(false),
    m_metadataDirective(S3MetadataDirective::NOT_SET),
    m_metadataDirectiveHasBeenSet(false),
    m_modifiedSinceConstraintHasBeenSet(false),
    m_newObjectMetadataHasBeenSet(false),
    m_newObjectTaggingHasBeenSet(false),
    m_redirectLocationHasBeenSet(false),
    m_requesterPays(false),
    m_requesterPaysHasBeenSet(false),
    m_storageClass(S3StorageClass::NOT_SET),
    m_storageClassHasBeenSet(false),
    m_unModifiedSinceConstraintHasBeenSet(false),
    m_sSEAwsKmsKeyIdHasBeenSet(false),
    m_targetKeyPrefixHasBeenSet(false),
    m_objectLockLegalHoldStatus(S3ObjectLockLegalHoldStatus::NOT_SET),
    m_objectLockLegalHoldStatusHasBeenSet(false),
    m_objectLockMode(S3ObjectLockMode::NOT_SET),
    m_objectLockModeHasBeenSet(false),
    m_objectLockRetainUntilDateHasBeenSet(false)
{
}

S3CopyObjectOperation::S3CopyObjectOperation(const XmlNode& xmlNode) : 
    m_targetResourceHasBeenSet(false),
    m_cannedAccessControlList(S3CannedAccessControlList::NOT_SET),
    m_cannedAccessControlListHasBeenSet(false),
    m_accessControlGrantsHasBeenSet(false),
    m_metadataDirective(S3MetadataDirective::NOT_SET),
    m_metadataDirectiveHasBeenSet(false),
    m_modifiedSinceConstraintHasBeenSet(false),
    m_newObjectMetadataHasBeenSet(false),
    m_newObjectTaggingHasBeenSet(false),
    m_redirectLocationHasBeenSet(false),
    m_requesterPays(false),
    m_requesterPaysHasBeenSet(false),
    m_storageClass(S3StorageClass::NOT_SET),
    m_storageClassHasBeenSet(false),
    m_unModifiedSinceConstraintHasBeenSet(false),
    m_sSEAwsKmsKeyIdHasBeenSet(false),
    m_targetKeyPrefixHasBeenSet(false),
    m_objectLockLegalHoldStatus(S3ObjectLockLegalHoldStatus::NOT_SET),
    m_objectLockLegalHoldStatusHasBeenSet(false),
    m_objectLockMode(S3ObjectLockMode::NOT_SET),
    m_objectLockModeHasBeenSet(false),
    m_objectLockRetainUntilDateHasBeenSet(false)
{
  *this = xmlNode;
}

S3CopyObjectOperation& S3CopyObjectOperation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode targetResourceNode = resultNode.FirstChild("TargetResource");
    if(!targetResourceNode.IsNull())
    {
      m_targetResource = targetResourceNode.GetText();
      m_targetResourceHasBeenSet = true;
    }
    XmlNode cannedAccessControlListNode = resultNode.FirstChild("CannedAccessControlList");
    if(!cannedAccessControlListNode.IsNull())
    {
      m_cannedAccessControlList = S3CannedAccessControlListMapper::GetS3CannedAccessControlListForName(StringUtils::Trim(cannedAccessControlListNode.GetText().c_str()).c_str());
      m_cannedAccessControlListHasBeenSet = true;
    }
    XmlNode accessControlGrantsNode = resultNode.FirstChild("AccessControlGrants");
    if(!accessControlGrantsNode.IsNull())
    {
      XmlNode accessControlGrantsMember = accessControlGrantsNode.FirstChild("member");
      while(!accessControlGrantsMember.IsNull())
      {
        m_accessControlGrants.push_back(accessControlGrantsMember);
        accessControlGrantsMember = accessControlGrantsMember.NextNode("member");
      }

      m_accessControlGrantsHasBeenSet = true;
    }
    XmlNode metadataDirectiveNode = resultNode.FirstChild("MetadataDirective");
    if(!metadataDirectiveNode.IsNull())
    {
      m_metadataDirective = S3MetadataDirectiveMapper::GetS3MetadataDirectiveForName(StringUtils::Trim(metadataDirectiveNode.GetText().c_str()).c_str());
      m_metadataDirectiveHasBeenSet = true;
    }
    XmlNode modifiedSinceConstraintNode = resultNode.FirstChild("ModifiedSinceConstraint");
    if(!modifiedSinceConstraintNode.IsNull())
    {
      m_modifiedSinceConstraint = DateTime(StringUtils::Trim(modifiedSinceConstraintNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_modifiedSinceConstraintHasBeenSet = true;
    }
    XmlNode newObjectMetadataNode = resultNode.FirstChild("NewObjectMetadata");
    if(!newObjectMetadataNode.IsNull())
    {
      m_newObjectMetadata = newObjectMetadataNode;
      m_newObjectMetadataHasBeenSet = true;
    }
    XmlNode newObjectTaggingNode = resultNode.FirstChild("NewObjectTagging");
    if(!newObjectTaggingNode.IsNull())
    {
      XmlNode newObjectTaggingMember = newObjectTaggingNode.FirstChild("member");
      while(!newObjectTaggingMember.IsNull())
      {
        m_newObjectTagging.push_back(newObjectTaggingMember);
        newObjectTaggingMember = newObjectTaggingMember.NextNode("member");
      }

      m_newObjectTaggingHasBeenSet = true;
    }
    XmlNode redirectLocationNode = resultNode.FirstChild("RedirectLocation");
    if(!redirectLocationNode.IsNull())
    {
      m_redirectLocation = redirectLocationNode.GetText();
      m_redirectLocationHasBeenSet = true;
    }
    XmlNode requesterPaysNode = resultNode.FirstChild("RequesterPays");
    if(!requesterPaysNode.IsNull())
    {
      m_requesterPays = StringUtils::ConvertToBool(StringUtils::Trim(requesterPaysNode.GetText().c_str()).c_str());
      m_requesterPaysHasBeenSet = true;
    }
    XmlNode storageClassNode = resultNode.FirstChild("StorageClass");
    if(!storageClassNode.IsNull())
    {
      m_storageClass = S3StorageClassMapper::GetS3StorageClassForName(StringUtils::Trim(storageClassNode.GetText().c_str()).c_str());
      m_storageClassHasBeenSet = true;
    }
    XmlNode unModifiedSinceConstraintNode = resultNode.FirstChild("UnModifiedSinceConstraint");
    if(!unModifiedSinceConstraintNode.IsNull())
    {
      m_unModifiedSinceConstraint = DateTime(StringUtils::Trim(unModifiedSinceConstraintNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_unModifiedSinceConstraintHasBeenSet = true;
    }
    XmlNode sSEAwsKmsKeyIdNode = resultNode.FirstChild("SSEAwsKmsKeyId");
    if(!sSEAwsKmsKeyIdNode.IsNull())
    {
      m_sSEAwsKmsKeyId = sSEAwsKmsKeyIdNode.GetText();
      m_sSEAwsKmsKeyIdHasBeenSet = true;
    }
    XmlNode targetKeyPrefixNode = resultNode.FirstChild("TargetKeyPrefix");
    if(!targetKeyPrefixNode.IsNull())
    {
      m_targetKeyPrefix = targetKeyPrefixNode.GetText();
      m_targetKeyPrefixHasBeenSet = true;
    }
    XmlNode objectLockLegalHoldStatusNode = resultNode.FirstChild("ObjectLockLegalHoldStatus");
    if(!objectLockLegalHoldStatusNode.IsNull())
    {
      m_objectLockLegalHoldStatus = S3ObjectLockLegalHoldStatusMapper::GetS3ObjectLockLegalHoldStatusForName(StringUtils::Trim(objectLockLegalHoldStatusNode.GetText().c_str()).c_str());
      m_objectLockLegalHoldStatusHasBeenSet = true;
    }
    XmlNode objectLockModeNode = resultNode.FirstChild("ObjectLockMode");
    if(!objectLockModeNode.IsNull())
    {
      m_objectLockMode = S3ObjectLockModeMapper::GetS3ObjectLockModeForName(StringUtils::Trim(objectLockModeNode.GetText().c_str()).c_str());
      m_objectLockModeHasBeenSet = true;
    }
    XmlNode objectLockRetainUntilDateNode = resultNode.FirstChild("ObjectLockRetainUntilDate");
    if(!objectLockRetainUntilDateNode.IsNull())
    {
      m_objectLockRetainUntilDate = DateTime(StringUtils::Trim(objectLockRetainUntilDateNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_objectLockRetainUntilDateHasBeenSet = true;
    }
  }

  return *this;
}

void S3CopyObjectOperation::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_targetResourceHasBeenSet)
  {
   XmlNode targetResourceNode = parentNode.CreateChildElement("TargetResource");
   targetResourceNode.SetText(m_targetResource);
  }

  if(m_cannedAccessControlListHasBeenSet)
  {
   XmlNode cannedAccessControlListNode = parentNode.CreateChildElement("CannedAccessControlList");
   cannedAccessControlListNode.SetText(S3CannedAccessControlListMapper::GetNameForS3CannedAccessControlList(m_cannedAccessControlList));
  }

  if(m_accessControlGrantsHasBeenSet)
  {
   XmlNode accessControlGrantsParentNode = parentNode.CreateChildElement("AccessControlGrants");
   for(const auto& item : m_accessControlGrants)
   {
     XmlNode accessControlGrantsNode = accessControlGrantsParentNode.CreateChildElement("S3Grant");
     item.AddToNode(accessControlGrantsNode);
   }
  }

  if(m_metadataDirectiveHasBeenSet)
  {
   XmlNode metadataDirectiveNode = parentNode.CreateChildElement("MetadataDirective");
   metadataDirectiveNode.SetText(S3MetadataDirectiveMapper::GetNameForS3MetadataDirective(m_metadataDirective));
  }

  if(m_modifiedSinceConstraintHasBeenSet)
  {
   XmlNode modifiedSinceConstraintNode = parentNode.CreateChildElement("ModifiedSinceConstraint");
   modifiedSinceConstraintNode.SetText(m_modifiedSinceConstraint.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_newObjectMetadataHasBeenSet)
  {
   XmlNode newObjectMetadataNode = parentNode.CreateChildElement("NewObjectMetadata");
   m_newObjectMetadata.AddToNode(newObjectMetadataNode);
  }

  if(m_newObjectTaggingHasBeenSet)
  {
   XmlNode newObjectTaggingParentNode = parentNode.CreateChildElement("NewObjectTagging");
   for(const auto& item : m_newObjectTagging)
   {
     XmlNode newObjectTaggingNode = newObjectTaggingParentNode.CreateChildElement("S3Tag");
     item.AddToNode(newObjectTaggingNode);
   }
  }

  if(m_redirectLocationHasBeenSet)
  {
   XmlNode redirectLocationNode = parentNode.CreateChildElement("RedirectLocation");
   redirectLocationNode.SetText(m_redirectLocation);
  }

  if(m_requesterPaysHasBeenSet)
  {
   XmlNode requesterPaysNode = parentNode.CreateChildElement("RequesterPays");
   ss << std::boolalpha << m_requesterPays;
   requesterPaysNode.SetText(ss.str());
   ss.str("");
  }

  if(m_storageClassHasBeenSet)
  {
   XmlNode storageClassNode = parentNode.CreateChildElement("StorageClass");
   storageClassNode.SetText(S3StorageClassMapper::GetNameForS3StorageClass(m_storageClass));
  }

  if(m_unModifiedSinceConstraintHasBeenSet)
  {
   XmlNode unModifiedSinceConstraintNode = parentNode.CreateChildElement("UnModifiedSinceConstraint");
   unModifiedSinceConstraintNode.SetText(m_unModifiedSinceConstraint.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_sSEAwsKmsKeyIdHasBeenSet)
  {
   XmlNode sSEAwsKmsKeyIdNode = parentNode.CreateChildElement("SSEAwsKmsKeyId");
   sSEAwsKmsKeyIdNode.SetText(m_sSEAwsKmsKeyId);
  }

  if(m_targetKeyPrefixHasBeenSet)
  {
   XmlNode targetKeyPrefixNode = parentNode.CreateChildElement("TargetKeyPrefix");
   targetKeyPrefixNode.SetText(m_targetKeyPrefix);
  }

  if(m_objectLockLegalHoldStatusHasBeenSet)
  {
   XmlNode objectLockLegalHoldStatusNode = parentNode.CreateChildElement("ObjectLockLegalHoldStatus");
   objectLockLegalHoldStatusNode.SetText(S3ObjectLockLegalHoldStatusMapper::GetNameForS3ObjectLockLegalHoldStatus(m_objectLockLegalHoldStatus));
  }

  if(m_objectLockModeHasBeenSet)
  {
   XmlNode objectLockModeNode = parentNode.CreateChildElement("ObjectLockMode");
   objectLockModeNode.SetText(S3ObjectLockModeMapper::GetNameForS3ObjectLockMode(m_objectLockMode));
  }

  if(m_objectLockRetainUntilDateHasBeenSet)
  {
   XmlNode objectLockRetainUntilDateNode = parentNode.CreateChildElement("ObjectLockRetainUntilDate");
   objectLockRetainUntilDateNode.SetText(m_objectLockRetainUntilDate.ToGmtString(DateFormat::ISO_8601));
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iam/model/UpdateSAMLProviderRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::IAM::Model;
using namespace Aws::Utils;

UpdateSAMLProviderRequest::UpdateSAMLProviderRequest() : 
    m_sAMLMetadataDocumentHasBeenSet(false),
    m_sAMLProviderArnHasBeenSet(false),
    m_assertionEncryptionMode(AssertionEncryptionModeType::NOT_SET),
    m_assertionEncryptionModeHasBeenSet(false),
    m_addPrivateKeyHasBeenSet(false),
    m_removePrivateKeyHasBeenSet(false)
{
}

Aws::String UpdateSAMLProviderRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=UpdateSAMLProvider&";
  if(m_sAMLMetadataDocumentHasBeenSet)
  {
    ss << "SAMLMetadataDocument=" << StringUtils::URLEncode(m_sAMLMetadataDocument.c_str()) << "&";
  }

  if(m_sAMLProviderArnHasBeenSet)
  {
    ss << "SAMLProviderArn=" << StringUtils::URLEncode(m_sAMLProviderArn.c_str()) << "&";
  }

  if(m_assertionEncryptionModeHasBeenSet)
  {
    ss << "AssertionEncryptionMode=" << StringUtils::URLEncode(AssertionEncryptionModeTypeMapper::GetNameForAssertionEncryptionModeType(m_assertionEncryptionMode)) << "&";
  }

  if(m_addPrivateKeyHasBeenSet)
  {
    ss << "AddPrivateKey=" << StringUtils::URLEncode(m_addPrivateKey.c_str()) << "&";
  }

  if(m_removePrivateKeyHasBeenSet)
  {
    ss << "RemovePrivateKey=" << StringUtils::URLEncode(m_removePrivateKey.c_str()) << "&";
  }

  ss << "Version=2010-05-08";
  return ss.str();
}


void  UpdateSAMLProviderRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

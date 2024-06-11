/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/model/RegistrationStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudFormation
{
namespace Model
{
  class DescribeTypeRegistrationResult
  {
  public:
    AWS_CLOUDFORMATION_API DescribeTypeRegistrationResult();
    AWS_CLOUDFORMATION_API DescribeTypeRegistrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API DescribeTypeRegistrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The current status of the extension registration request.</p>
     */
    inline const RegistrationStatus& GetProgressStatus() const{ return m_progressStatus; }
    inline void SetProgressStatus(const RegistrationStatus& value) { m_progressStatus = value; }
    inline void SetProgressStatus(RegistrationStatus&& value) { m_progressStatus = std::move(value); }
    inline DescribeTypeRegistrationResult& WithProgressStatus(const RegistrationStatus& value) { SetProgressStatus(value); return *this;}
    inline DescribeTypeRegistrationResult& WithProgressStatus(RegistrationStatus&& value) { SetProgressStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the extension registration request.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline DescribeTypeRegistrationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DescribeTypeRegistrationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DescribeTypeRegistrationResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the extension being registered.</p> <p>For
     * registration requests with a <code>ProgressStatus</code> of other than
     * <code>COMPLETE</code>, this will be <code>null</code>.</p>
     */
    inline const Aws::String& GetTypeArn() const{ return m_typeArn; }
    inline void SetTypeArn(const Aws::String& value) { m_typeArn = value; }
    inline void SetTypeArn(Aws::String&& value) { m_typeArn = std::move(value); }
    inline void SetTypeArn(const char* value) { m_typeArn.assign(value); }
    inline DescribeTypeRegistrationResult& WithTypeArn(const Aws::String& value) { SetTypeArn(value); return *this;}
    inline DescribeTypeRegistrationResult& WithTypeArn(Aws::String&& value) { SetTypeArn(std::move(value)); return *this;}
    inline DescribeTypeRegistrationResult& WithTypeArn(const char* value) { SetTypeArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of this specific version of the extension
     * being registered.</p> <p>For registration requests with a
     * <code>ProgressStatus</code> of other than <code>COMPLETE</code>, this will be
     * <code>null</code>.</p>
     */
    inline const Aws::String& GetTypeVersionArn() const{ return m_typeVersionArn; }
    inline void SetTypeVersionArn(const Aws::String& value) { m_typeVersionArn = value; }
    inline void SetTypeVersionArn(Aws::String&& value) { m_typeVersionArn = std::move(value); }
    inline void SetTypeVersionArn(const char* value) { m_typeVersionArn.assign(value); }
    inline DescribeTypeRegistrationResult& WithTypeVersionArn(const Aws::String& value) { SetTypeVersionArn(value); return *this;}
    inline DescribeTypeRegistrationResult& WithTypeVersionArn(Aws::String&& value) { SetTypeVersionArn(std::move(value)); return *this;}
    inline DescribeTypeRegistrationResult& WithTypeVersionArn(const char* value) { SetTypeVersionArn(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeTypeRegistrationResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeTypeRegistrationResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    RegistrationStatus m_progressStatus;

    Aws::String m_description;

    Aws::String m_typeArn;

    Aws::String m_typeVersionArn;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws

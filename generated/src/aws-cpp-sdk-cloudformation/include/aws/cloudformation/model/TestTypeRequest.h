/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ThirdPartyType.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   */
  class TestTypeRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API TestTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TestType"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the extension.</p> <p>Conditional: You must
     * specify <code>Arn</code>, or <code>TypeName</code> and <code>Type</code>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline TestTypeRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline TestTypeRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline TestTypeRequest& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the extension to test.</p> <p>Conditional: You must specify
     * <code>Arn</code>, or <code>TypeName</code> and <code>Type</code>.</p>
     */
    inline const ThirdPartyType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ThirdPartyType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ThirdPartyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline TestTypeRequest& WithType(const ThirdPartyType& value) { SetType(value); return *this;}
    inline TestTypeRequest& WithType(ThirdPartyType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the extension to test.</p> <p>Conditional: You must specify
     * <code>Arn</code>, or <code>TypeName</code> and <code>Type</code>.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }
    inline TestTypeRequest& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}
    inline TestTypeRequest& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}
    inline TestTypeRequest& WithTypeName(const char* value) { SetTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the extension to test.</p> <p>You can specify the version id
     * with either <code>Arn</code>, or with <code>TypeName</code> and
     * <code>Type</code>.</p> <p>If you don't specify a version, CloudFormation uses
     * the default version of the extension in this account and Region for testing.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }
    inline TestTypeRequest& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}
    inline TestTypeRequest& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}
    inline TestTypeRequest& WithVersionId(const char* value) { SetVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 bucket to which CloudFormation delivers the contract test execution
     * logs.</p> <p>CloudFormation delivers the logs by the time contract testing has
     * completed and the extension has been assigned a test type status of
     * <code>PASSED</code> or <code>FAILED</code>.</p> <p>The user calling
     * <code>TestType</code> must be able to access items in the specified S3 bucket.
     * Specifically, the user needs the following permissions:</p> <ul> <li> <p>
     * <code>GetObject</code> </p> </li> <li> <p> <code>PutObject</code> </p> </li>
     * </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_amazons3.html">Actions,
     * Resources, and Condition Keys for Amazon S3</a> in the <i>Identity and Access
     * Management User Guide</i>.</p>
     */
    inline const Aws::String& GetLogDeliveryBucket() const{ return m_logDeliveryBucket; }
    inline bool LogDeliveryBucketHasBeenSet() const { return m_logDeliveryBucketHasBeenSet; }
    inline void SetLogDeliveryBucket(const Aws::String& value) { m_logDeliveryBucketHasBeenSet = true; m_logDeliveryBucket = value; }
    inline void SetLogDeliveryBucket(Aws::String&& value) { m_logDeliveryBucketHasBeenSet = true; m_logDeliveryBucket = std::move(value); }
    inline void SetLogDeliveryBucket(const char* value) { m_logDeliveryBucketHasBeenSet = true; m_logDeliveryBucket.assign(value); }
    inline TestTypeRequest& WithLogDeliveryBucket(const Aws::String& value) { SetLogDeliveryBucket(value); return *this;}
    inline TestTypeRequest& WithLogDeliveryBucket(Aws::String&& value) { SetLogDeliveryBucket(std::move(value)); return *this;}
    inline TestTypeRequest& WithLogDeliveryBucket(const char* value) { SetLogDeliveryBucket(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    ThirdPartyType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    Aws::String m_logDeliveryBucket;
    bool m_logDeliveryBucketHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws

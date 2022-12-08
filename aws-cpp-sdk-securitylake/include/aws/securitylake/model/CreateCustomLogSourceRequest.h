/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/SecurityLakeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securitylake/model/OcsfEventClass.h>
#include <utility>

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

  /**
   */
  class CreateCustomLogSourceRequest : public SecurityLakeRequest
  {
  public:
    AWS_SECURITYLAKE_API CreateCustomLogSourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCustomLogSource"; }

    AWS_SECURITYLAKE_API Aws::String SerializePayload() const override;


    /**
     * <p>The custom source name for a third-party custom source. </p>
     */
    inline const Aws::String& GetCustomSourceName() const{ return m_customSourceName; }

    /**
     * <p>The custom source name for a third-party custom source. </p>
     */
    inline bool CustomSourceNameHasBeenSet() const { return m_customSourceNameHasBeenSet; }

    /**
     * <p>The custom source name for a third-party custom source. </p>
     */
    inline void SetCustomSourceName(const Aws::String& value) { m_customSourceNameHasBeenSet = true; m_customSourceName = value; }

    /**
     * <p>The custom source name for a third-party custom source. </p>
     */
    inline void SetCustomSourceName(Aws::String&& value) { m_customSourceNameHasBeenSet = true; m_customSourceName = std::move(value); }

    /**
     * <p>The custom source name for a third-party custom source. </p>
     */
    inline void SetCustomSourceName(const char* value) { m_customSourceNameHasBeenSet = true; m_customSourceName.assign(value); }

    /**
     * <p>The custom source name for a third-party custom source. </p>
     */
    inline CreateCustomLogSourceRequest& WithCustomSourceName(const Aws::String& value) { SetCustomSourceName(value); return *this;}

    /**
     * <p>The custom source name for a third-party custom source. </p>
     */
    inline CreateCustomLogSourceRequest& WithCustomSourceName(Aws::String&& value) { SetCustomSourceName(std::move(value)); return *this;}

    /**
     * <p>The custom source name for a third-party custom source. </p>
     */
    inline CreateCustomLogSourceRequest& WithCustomSourceName(const char* value) { SetCustomSourceName(value); return *this;}


    /**
     * <p>The Open Cybersecurity Schema Framework (OCSF) event class.</p>
     */
    inline const OcsfEventClass& GetEventClass() const{ return m_eventClass; }

    /**
     * <p>The Open Cybersecurity Schema Framework (OCSF) event class.</p>
     */
    inline bool EventClassHasBeenSet() const { return m_eventClassHasBeenSet; }

    /**
     * <p>The Open Cybersecurity Schema Framework (OCSF) event class.</p>
     */
    inline void SetEventClass(const OcsfEventClass& value) { m_eventClassHasBeenSet = true; m_eventClass = value; }

    /**
     * <p>The Open Cybersecurity Schema Framework (OCSF) event class.</p>
     */
    inline void SetEventClass(OcsfEventClass&& value) { m_eventClassHasBeenSet = true; m_eventClass = std::move(value); }

    /**
     * <p>The Open Cybersecurity Schema Framework (OCSF) event class.</p>
     */
    inline CreateCustomLogSourceRequest& WithEventClass(const OcsfEventClass& value) { SetEventClass(value); return *this;}

    /**
     * <p>The Open Cybersecurity Schema Framework (OCSF) event class.</p>
     */
    inline CreateCustomLogSourceRequest& WithEventClass(OcsfEventClass&& value) { SetEventClass(std::move(value)); return *this;}


    /**
     * <p>The IAM Role ARN to be used by the Glue Crawler. The recommended IAM policies
     * are:</p> <ul> <li> <p>The managed policy <code>AWSGlueServiceRole</code> </p>
     * </li> <li> <p>A custom policy granting access to your S3 Data Lake</p> </li>
     * </ul>
     */
    inline const Aws::String& GetGlueInvocationRoleArn() const{ return m_glueInvocationRoleArn; }

    /**
     * <p>The IAM Role ARN to be used by the Glue Crawler. The recommended IAM policies
     * are:</p> <ul> <li> <p>The managed policy <code>AWSGlueServiceRole</code> </p>
     * </li> <li> <p>A custom policy granting access to your S3 Data Lake</p> </li>
     * </ul>
     */
    inline bool GlueInvocationRoleArnHasBeenSet() const { return m_glueInvocationRoleArnHasBeenSet; }

    /**
     * <p>The IAM Role ARN to be used by the Glue Crawler. The recommended IAM policies
     * are:</p> <ul> <li> <p>The managed policy <code>AWSGlueServiceRole</code> </p>
     * </li> <li> <p>A custom policy granting access to your S3 Data Lake</p> </li>
     * </ul>
     */
    inline void SetGlueInvocationRoleArn(const Aws::String& value) { m_glueInvocationRoleArnHasBeenSet = true; m_glueInvocationRoleArn = value; }

    /**
     * <p>The IAM Role ARN to be used by the Glue Crawler. The recommended IAM policies
     * are:</p> <ul> <li> <p>The managed policy <code>AWSGlueServiceRole</code> </p>
     * </li> <li> <p>A custom policy granting access to your S3 Data Lake</p> </li>
     * </ul>
     */
    inline void SetGlueInvocationRoleArn(Aws::String&& value) { m_glueInvocationRoleArnHasBeenSet = true; m_glueInvocationRoleArn = std::move(value); }

    /**
     * <p>The IAM Role ARN to be used by the Glue Crawler. The recommended IAM policies
     * are:</p> <ul> <li> <p>The managed policy <code>AWSGlueServiceRole</code> </p>
     * </li> <li> <p>A custom policy granting access to your S3 Data Lake</p> </li>
     * </ul>
     */
    inline void SetGlueInvocationRoleArn(const char* value) { m_glueInvocationRoleArnHasBeenSet = true; m_glueInvocationRoleArn.assign(value); }

    /**
     * <p>The IAM Role ARN to be used by the Glue Crawler. The recommended IAM policies
     * are:</p> <ul> <li> <p>The managed policy <code>AWSGlueServiceRole</code> </p>
     * </li> <li> <p>A custom policy granting access to your S3 Data Lake</p> </li>
     * </ul>
     */
    inline CreateCustomLogSourceRequest& WithGlueInvocationRoleArn(const Aws::String& value) { SetGlueInvocationRoleArn(value); return *this;}

    /**
     * <p>The IAM Role ARN to be used by the Glue Crawler. The recommended IAM policies
     * are:</p> <ul> <li> <p>The managed policy <code>AWSGlueServiceRole</code> </p>
     * </li> <li> <p>A custom policy granting access to your S3 Data Lake</p> </li>
     * </ul>
     */
    inline CreateCustomLogSourceRequest& WithGlueInvocationRoleArn(Aws::String&& value) { SetGlueInvocationRoleArn(std::move(value)); return *this;}

    /**
     * <p>The IAM Role ARN to be used by the Glue Crawler. The recommended IAM policies
     * are:</p> <ul> <li> <p>The managed policy <code>AWSGlueServiceRole</code> </p>
     * </li> <li> <p>A custom policy granting access to your S3 Data Lake</p> </li>
     * </ul>
     */
    inline CreateCustomLogSourceRequest& WithGlueInvocationRoleArn(const char* value) { SetGlueInvocationRoleArn(value); return *this;}


    /**
     * <p>The Account ID that will assume the above Role to put logs into the Data
     * Lake.</p>
     */
    inline const Aws::String& GetLogProviderAccountId() const{ return m_logProviderAccountId; }

    /**
     * <p>The Account ID that will assume the above Role to put logs into the Data
     * Lake.</p>
     */
    inline bool LogProviderAccountIdHasBeenSet() const { return m_logProviderAccountIdHasBeenSet; }

    /**
     * <p>The Account ID that will assume the above Role to put logs into the Data
     * Lake.</p>
     */
    inline void SetLogProviderAccountId(const Aws::String& value) { m_logProviderAccountIdHasBeenSet = true; m_logProviderAccountId = value; }

    /**
     * <p>The Account ID that will assume the above Role to put logs into the Data
     * Lake.</p>
     */
    inline void SetLogProviderAccountId(Aws::String&& value) { m_logProviderAccountIdHasBeenSet = true; m_logProviderAccountId = std::move(value); }

    /**
     * <p>The Account ID that will assume the above Role to put logs into the Data
     * Lake.</p>
     */
    inline void SetLogProviderAccountId(const char* value) { m_logProviderAccountIdHasBeenSet = true; m_logProviderAccountId.assign(value); }

    /**
     * <p>The Account ID that will assume the above Role to put logs into the Data
     * Lake.</p>
     */
    inline CreateCustomLogSourceRequest& WithLogProviderAccountId(const Aws::String& value) { SetLogProviderAccountId(value); return *this;}

    /**
     * <p>The Account ID that will assume the above Role to put logs into the Data
     * Lake.</p>
     */
    inline CreateCustomLogSourceRequest& WithLogProviderAccountId(Aws::String&& value) { SetLogProviderAccountId(std::move(value)); return *this;}

    /**
     * <p>The Account ID that will assume the above Role to put logs into the Data
     * Lake.</p>
     */
    inline CreateCustomLogSourceRequest& WithLogProviderAccountId(const char* value) { SetLogProviderAccountId(value); return *this;}

  private:

    Aws::String m_customSourceName;
    bool m_customSourceNameHasBeenSet = false;

    OcsfEventClass m_eventClass;
    bool m_eventClassHasBeenSet = false;

    Aws::String m_glueInvocationRoleArn;
    bool m_glueInvocationRoleArnHasBeenSet = false;

    Aws::String m_logProviderAccountId;
    bool m_logProviderAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Credentials for the master user: username and password, ARN, or
   * both.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/MasterUserOptions">AWS
   * API Reference</a></p>
   */
  class MasterUserOptions
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API MasterUserOptions();
    AWS_ELASTICSEARCHSERVICE_API MasterUserOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API MasterUserOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>ARN for the master user (if IAM is enabled).</p>
     */
    inline const Aws::String& GetMasterUserARN() const{ return m_masterUserARN; }

    /**
     * <p>ARN for the master user (if IAM is enabled).</p>
     */
    inline bool MasterUserARNHasBeenSet() const { return m_masterUserARNHasBeenSet; }

    /**
     * <p>ARN for the master user (if IAM is enabled).</p>
     */
    inline void SetMasterUserARN(const Aws::String& value) { m_masterUserARNHasBeenSet = true; m_masterUserARN = value; }

    /**
     * <p>ARN for the master user (if IAM is enabled).</p>
     */
    inline void SetMasterUserARN(Aws::String&& value) { m_masterUserARNHasBeenSet = true; m_masterUserARN = std::move(value); }

    /**
     * <p>ARN for the master user (if IAM is enabled).</p>
     */
    inline void SetMasterUserARN(const char* value) { m_masterUserARNHasBeenSet = true; m_masterUserARN.assign(value); }

    /**
     * <p>ARN for the master user (if IAM is enabled).</p>
     */
    inline MasterUserOptions& WithMasterUserARN(const Aws::String& value) { SetMasterUserARN(value); return *this;}

    /**
     * <p>ARN for the master user (if IAM is enabled).</p>
     */
    inline MasterUserOptions& WithMasterUserARN(Aws::String&& value) { SetMasterUserARN(std::move(value)); return *this;}

    /**
     * <p>ARN for the master user (if IAM is enabled).</p>
     */
    inline MasterUserOptions& WithMasterUserARN(const char* value) { SetMasterUserARN(value); return *this;}


    /**
     * <p>The master user's username, which is stored in the Amazon Elasticsearch
     * Service domain's internal database.</p>
     */
    inline const Aws::String& GetMasterUserName() const{ return m_masterUserName; }

    /**
     * <p>The master user's username, which is stored in the Amazon Elasticsearch
     * Service domain's internal database.</p>
     */
    inline bool MasterUserNameHasBeenSet() const { return m_masterUserNameHasBeenSet; }

    /**
     * <p>The master user's username, which is stored in the Amazon Elasticsearch
     * Service domain's internal database.</p>
     */
    inline void SetMasterUserName(const Aws::String& value) { m_masterUserNameHasBeenSet = true; m_masterUserName = value; }

    /**
     * <p>The master user's username, which is stored in the Amazon Elasticsearch
     * Service domain's internal database.</p>
     */
    inline void SetMasterUserName(Aws::String&& value) { m_masterUserNameHasBeenSet = true; m_masterUserName = std::move(value); }

    /**
     * <p>The master user's username, which is stored in the Amazon Elasticsearch
     * Service domain's internal database.</p>
     */
    inline void SetMasterUserName(const char* value) { m_masterUserNameHasBeenSet = true; m_masterUserName.assign(value); }

    /**
     * <p>The master user's username, which is stored in the Amazon Elasticsearch
     * Service domain's internal database.</p>
     */
    inline MasterUserOptions& WithMasterUserName(const Aws::String& value) { SetMasterUserName(value); return *this;}

    /**
     * <p>The master user's username, which is stored in the Amazon Elasticsearch
     * Service domain's internal database.</p>
     */
    inline MasterUserOptions& WithMasterUserName(Aws::String&& value) { SetMasterUserName(std::move(value)); return *this;}

    /**
     * <p>The master user's username, which is stored in the Amazon Elasticsearch
     * Service domain's internal database.</p>
     */
    inline MasterUserOptions& WithMasterUserName(const char* value) { SetMasterUserName(value); return *this;}


    /**
     * <p>The master user's password, which is stored in the Amazon Elasticsearch
     * Service domain's internal database.</p>
     */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }

    /**
     * <p>The master user's password, which is stored in the Amazon Elasticsearch
     * Service domain's internal database.</p>
     */
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }

    /**
     * <p>The master user's password, which is stored in the Amazon Elasticsearch
     * Service domain's internal database.</p>
     */
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }

    /**
     * <p>The master user's password, which is stored in the Amazon Elasticsearch
     * Service domain's internal database.</p>
     */
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::move(value); }

    /**
     * <p>The master user's password, which is stored in the Amazon Elasticsearch
     * Service domain's internal database.</p>
     */
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }

    /**
     * <p>The master user's password, which is stored in the Amazon Elasticsearch
     * Service domain's internal database.</p>
     */
    inline MasterUserOptions& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}

    /**
     * <p>The master user's password, which is stored in the Amazon Elasticsearch
     * Service domain's internal database.</p>
     */
    inline MasterUserOptions& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(std::move(value)); return *this;}

    /**
     * <p>The master user's password, which is stored in the Amazon Elasticsearch
     * Service domain's internal database.</p>
     */
    inline MasterUserOptions& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}

  private:

    Aws::String m_masterUserARN;
    bool m_masterUserARNHasBeenSet = false;

    Aws::String m_masterUserName;
    bool m_masterUserNameHasBeenSet = false;

    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws

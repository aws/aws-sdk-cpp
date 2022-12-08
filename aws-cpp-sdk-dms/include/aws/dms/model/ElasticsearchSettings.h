/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Provides information that defines an OpenSearch endpoint.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ElasticsearchSettings">AWS
   * API Reference</a></p>
   */
  class ElasticsearchSettings
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ElasticsearchSettings();
    AWS_DATABASEMIGRATIONSERVICE_API ElasticsearchSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API ElasticsearchSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) used by the service to access the IAM role.
     * The role must allow the <code>iam:PassRole</code> action.</p>
     */
    inline const Aws::String& GetServiceAccessRoleArn() const{ return m_serviceAccessRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) used by the service to access the IAM role.
     * The role must allow the <code>iam:PassRole</code> action.</p>
     */
    inline bool ServiceAccessRoleArnHasBeenSet() const { return m_serviceAccessRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) used by the service to access the IAM role.
     * The role must allow the <code>iam:PassRole</code> action.</p>
     */
    inline void SetServiceAccessRoleArn(const Aws::String& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) used by the service to access the IAM role.
     * The role must allow the <code>iam:PassRole</code> action.</p>
     */
    inline void SetServiceAccessRoleArn(Aws::String&& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) used by the service to access the IAM role.
     * The role must allow the <code>iam:PassRole</code> action.</p>
     */
    inline void SetServiceAccessRoleArn(const char* value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) used by the service to access the IAM role.
     * The role must allow the <code>iam:PassRole</code> action.</p>
     */
    inline ElasticsearchSettings& WithServiceAccessRoleArn(const Aws::String& value) { SetServiceAccessRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) used by the service to access the IAM role.
     * The role must allow the <code>iam:PassRole</code> action.</p>
     */
    inline ElasticsearchSettings& WithServiceAccessRoleArn(Aws::String&& value) { SetServiceAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) used by the service to access the IAM role.
     * The role must allow the <code>iam:PassRole</code> action.</p>
     */
    inline ElasticsearchSettings& WithServiceAccessRoleArn(const char* value) { SetServiceAccessRoleArn(value); return *this;}


    /**
     * <p>The endpoint for the OpenSearch cluster. DMS uses HTTPS if a transport
     * protocol (http/https) is not specified.</p>
     */
    inline const Aws::String& GetEndpointUri() const{ return m_endpointUri; }

    /**
     * <p>The endpoint for the OpenSearch cluster. DMS uses HTTPS if a transport
     * protocol (http/https) is not specified.</p>
     */
    inline bool EndpointUriHasBeenSet() const { return m_endpointUriHasBeenSet; }

    /**
     * <p>The endpoint for the OpenSearch cluster. DMS uses HTTPS if a transport
     * protocol (http/https) is not specified.</p>
     */
    inline void SetEndpointUri(const Aws::String& value) { m_endpointUriHasBeenSet = true; m_endpointUri = value; }

    /**
     * <p>The endpoint for the OpenSearch cluster. DMS uses HTTPS if a transport
     * protocol (http/https) is not specified.</p>
     */
    inline void SetEndpointUri(Aws::String&& value) { m_endpointUriHasBeenSet = true; m_endpointUri = std::move(value); }

    /**
     * <p>The endpoint for the OpenSearch cluster. DMS uses HTTPS if a transport
     * protocol (http/https) is not specified.</p>
     */
    inline void SetEndpointUri(const char* value) { m_endpointUriHasBeenSet = true; m_endpointUri.assign(value); }

    /**
     * <p>The endpoint for the OpenSearch cluster. DMS uses HTTPS if a transport
     * protocol (http/https) is not specified.</p>
     */
    inline ElasticsearchSettings& WithEndpointUri(const Aws::String& value) { SetEndpointUri(value); return *this;}

    /**
     * <p>The endpoint for the OpenSearch cluster. DMS uses HTTPS if a transport
     * protocol (http/https) is not specified.</p>
     */
    inline ElasticsearchSettings& WithEndpointUri(Aws::String&& value) { SetEndpointUri(std::move(value)); return *this;}

    /**
     * <p>The endpoint for the OpenSearch cluster. DMS uses HTTPS if a transport
     * protocol (http/https) is not specified.</p>
     */
    inline ElasticsearchSettings& WithEndpointUri(const char* value) { SetEndpointUri(value); return *this;}


    /**
     * <p>The maximum percentage of records that can fail to be written before a full
     * load operation stops.</p> <p>To avoid early failure, this counter is only
     * effective after 1000 records are transferred. OpenSearch also has the concept of
     * error monitoring during the last 10 minutes of an Observation Window. If
     * transfer of all records fail in the last 10 minutes, the full load operation
     * stops. </p>
     */
    inline int GetFullLoadErrorPercentage() const{ return m_fullLoadErrorPercentage; }

    /**
     * <p>The maximum percentage of records that can fail to be written before a full
     * load operation stops.</p> <p>To avoid early failure, this counter is only
     * effective after 1000 records are transferred. OpenSearch also has the concept of
     * error monitoring during the last 10 minutes of an Observation Window. If
     * transfer of all records fail in the last 10 minutes, the full load operation
     * stops. </p>
     */
    inline bool FullLoadErrorPercentageHasBeenSet() const { return m_fullLoadErrorPercentageHasBeenSet; }

    /**
     * <p>The maximum percentage of records that can fail to be written before a full
     * load operation stops.</p> <p>To avoid early failure, this counter is only
     * effective after 1000 records are transferred. OpenSearch also has the concept of
     * error monitoring during the last 10 minutes of an Observation Window. If
     * transfer of all records fail in the last 10 minutes, the full load operation
     * stops. </p>
     */
    inline void SetFullLoadErrorPercentage(int value) { m_fullLoadErrorPercentageHasBeenSet = true; m_fullLoadErrorPercentage = value; }

    /**
     * <p>The maximum percentage of records that can fail to be written before a full
     * load operation stops.</p> <p>To avoid early failure, this counter is only
     * effective after 1000 records are transferred. OpenSearch also has the concept of
     * error monitoring during the last 10 minutes of an Observation Window. If
     * transfer of all records fail in the last 10 minutes, the full load operation
     * stops. </p>
     */
    inline ElasticsearchSettings& WithFullLoadErrorPercentage(int value) { SetFullLoadErrorPercentage(value); return *this;}


    /**
     * <p>The maximum number of seconds for which DMS retries failed API requests to
     * the OpenSearch cluster.</p>
     */
    inline int GetErrorRetryDuration() const{ return m_errorRetryDuration; }

    /**
     * <p>The maximum number of seconds for which DMS retries failed API requests to
     * the OpenSearch cluster.</p>
     */
    inline bool ErrorRetryDurationHasBeenSet() const { return m_errorRetryDurationHasBeenSet; }

    /**
     * <p>The maximum number of seconds for which DMS retries failed API requests to
     * the OpenSearch cluster.</p>
     */
    inline void SetErrorRetryDuration(int value) { m_errorRetryDurationHasBeenSet = true; m_errorRetryDuration = value; }

    /**
     * <p>The maximum number of seconds for which DMS retries failed API requests to
     * the OpenSearch cluster.</p>
     */
    inline ElasticsearchSettings& WithErrorRetryDuration(int value) { SetErrorRetryDuration(value); return *this;}


    /**
     * <p>Set this option to <code>true</code> for DMS to migrate documentation using
     * the documentation type <code>_doc</code>. OpenSearch and an Elasticsearch
     * cluster only support the _doc documentation type in versions 7. x and later. The
     * default value is <code>false</code>.</p>
     */
    inline bool GetUseNewMappingType() const{ return m_useNewMappingType; }

    /**
     * <p>Set this option to <code>true</code> for DMS to migrate documentation using
     * the documentation type <code>_doc</code>. OpenSearch and an Elasticsearch
     * cluster only support the _doc documentation type in versions 7. x and later. The
     * default value is <code>false</code>.</p>
     */
    inline bool UseNewMappingTypeHasBeenSet() const { return m_useNewMappingTypeHasBeenSet; }

    /**
     * <p>Set this option to <code>true</code> for DMS to migrate documentation using
     * the documentation type <code>_doc</code>. OpenSearch and an Elasticsearch
     * cluster only support the _doc documentation type in versions 7. x and later. The
     * default value is <code>false</code>.</p>
     */
    inline void SetUseNewMappingType(bool value) { m_useNewMappingTypeHasBeenSet = true; m_useNewMappingType = value; }

    /**
     * <p>Set this option to <code>true</code> for DMS to migrate documentation using
     * the documentation type <code>_doc</code>. OpenSearch and an Elasticsearch
     * cluster only support the _doc documentation type in versions 7. x and later. The
     * default value is <code>false</code>.</p>
     */
    inline ElasticsearchSettings& WithUseNewMappingType(bool value) { SetUseNewMappingType(value); return *this;}

  private:

    Aws::String m_serviceAccessRoleArn;
    bool m_serviceAccessRoleArnHasBeenSet = false;

    Aws::String m_endpointUri;
    bool m_endpointUriHasBeenSet = false;

    int m_fullLoadErrorPercentage;
    bool m_fullLoadErrorPercentageHasBeenSet = false;

    int m_errorRetryDuration;
    bool m_errorRetryDurationHasBeenSet = false;

    bool m_useNewMappingType;
    bool m_useNewMappingTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws

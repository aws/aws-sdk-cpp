/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsApiGatewayEndpointConfiguration.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Contains information about a REST API in version 1 of Amazon API
   * Gateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsApiGatewayRestApiDetails">AWS
   * API Reference</a></p>
   */
  class AwsApiGatewayRestApiDetails
  {
  public:
    AWS_SECURITYHUB_API AwsApiGatewayRestApiDetails();
    AWS_SECURITYHUB_API AwsApiGatewayRestApiDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsApiGatewayRestApiDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the REST API.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the REST API.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the REST API.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the REST API.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the REST API.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the REST API.</p>
     */
    inline AwsApiGatewayRestApiDetails& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the REST API.</p>
     */
    inline AwsApiGatewayRestApiDetails& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the REST API.</p>
     */
    inline AwsApiGatewayRestApiDetails& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the REST API.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the REST API.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the REST API.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the REST API.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the REST API.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the REST API.</p>
     */
    inline AwsApiGatewayRestApiDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the REST API.</p>
     */
    inline AwsApiGatewayRestApiDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the REST API.</p>
     */
    inline AwsApiGatewayRestApiDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the REST API.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the REST API.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the REST API.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the REST API.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the REST API.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the REST API.</p>
     */
    inline AwsApiGatewayRestApiDetails& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the REST API.</p>
     */
    inline AwsApiGatewayRestApiDetails& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the REST API.</p>
     */
    inline AwsApiGatewayRestApiDetails& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Indicates when the API was created.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>Indicates when the API was created.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }

    /**
     * <p>Indicates when the API was created.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreatedDate(const Aws::String& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * <p>Indicates when the API was created.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreatedDate(Aws::String&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }

    /**
     * <p>Indicates when the API was created.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreatedDate(const char* value) { m_createdDateHasBeenSet = true; m_createdDate.assign(value); }

    /**
     * <p>Indicates when the API was created.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsApiGatewayRestApiDetails& WithCreatedDate(const Aws::String& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>Indicates when the API was created.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsApiGatewayRestApiDetails& WithCreatedDate(Aws::String&& value) { SetCreatedDate(std::move(value)); return *this;}

    /**
     * <p>Indicates when the API was created.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsApiGatewayRestApiDetails& WithCreatedDate(const char* value) { SetCreatedDate(value); return *this;}


    /**
     * <p>The version identifier for the REST API.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version identifier for the REST API.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version identifier for the REST API.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version identifier for the REST API.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version identifier for the REST API.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version identifier for the REST API.</p>
     */
    inline AwsApiGatewayRestApiDetails& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version identifier for the REST API.</p>
     */
    inline AwsApiGatewayRestApiDetails& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version identifier for the REST API.</p>
     */
    inline AwsApiGatewayRestApiDetails& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The list of binary media types supported by the REST API.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBinaryMediaTypes() const{ return m_binaryMediaTypes; }

    /**
     * <p>The list of binary media types supported by the REST API.</p>
     */
    inline bool BinaryMediaTypesHasBeenSet() const { return m_binaryMediaTypesHasBeenSet; }

    /**
     * <p>The list of binary media types supported by the REST API.</p>
     */
    inline void SetBinaryMediaTypes(const Aws::Vector<Aws::String>& value) { m_binaryMediaTypesHasBeenSet = true; m_binaryMediaTypes = value; }

    /**
     * <p>The list of binary media types supported by the REST API.</p>
     */
    inline void SetBinaryMediaTypes(Aws::Vector<Aws::String>&& value) { m_binaryMediaTypesHasBeenSet = true; m_binaryMediaTypes = std::move(value); }

    /**
     * <p>The list of binary media types supported by the REST API.</p>
     */
    inline AwsApiGatewayRestApiDetails& WithBinaryMediaTypes(const Aws::Vector<Aws::String>& value) { SetBinaryMediaTypes(value); return *this;}

    /**
     * <p>The list of binary media types supported by the REST API.</p>
     */
    inline AwsApiGatewayRestApiDetails& WithBinaryMediaTypes(Aws::Vector<Aws::String>&& value) { SetBinaryMediaTypes(std::move(value)); return *this;}

    /**
     * <p>The list of binary media types supported by the REST API.</p>
     */
    inline AwsApiGatewayRestApiDetails& AddBinaryMediaTypes(const Aws::String& value) { m_binaryMediaTypesHasBeenSet = true; m_binaryMediaTypes.push_back(value); return *this; }

    /**
     * <p>The list of binary media types supported by the REST API.</p>
     */
    inline AwsApiGatewayRestApiDetails& AddBinaryMediaTypes(Aws::String&& value) { m_binaryMediaTypesHasBeenSet = true; m_binaryMediaTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of binary media types supported by the REST API.</p>
     */
    inline AwsApiGatewayRestApiDetails& AddBinaryMediaTypes(const char* value) { m_binaryMediaTypesHasBeenSet = true; m_binaryMediaTypes.push_back(value); return *this; }


    /**
     * <p>The minimum size in bytes of a payload before compression is enabled.</p>
     * <p>If <code>null</code>, then compression is disabled.</p> <p>If 0, then all
     * payloads are compressed.</p>
     */
    inline int GetMinimumCompressionSize() const{ return m_minimumCompressionSize; }

    /**
     * <p>The minimum size in bytes of a payload before compression is enabled.</p>
     * <p>If <code>null</code>, then compression is disabled.</p> <p>If 0, then all
     * payloads are compressed.</p>
     */
    inline bool MinimumCompressionSizeHasBeenSet() const { return m_minimumCompressionSizeHasBeenSet; }

    /**
     * <p>The minimum size in bytes of a payload before compression is enabled.</p>
     * <p>If <code>null</code>, then compression is disabled.</p> <p>If 0, then all
     * payloads are compressed.</p>
     */
    inline void SetMinimumCompressionSize(int value) { m_minimumCompressionSizeHasBeenSet = true; m_minimumCompressionSize = value; }

    /**
     * <p>The minimum size in bytes of a payload before compression is enabled.</p>
     * <p>If <code>null</code>, then compression is disabled.</p> <p>If 0, then all
     * payloads are compressed.</p>
     */
    inline AwsApiGatewayRestApiDetails& WithMinimumCompressionSize(int value) { SetMinimumCompressionSize(value); return *this;}


    /**
     * <p>The source of the API key for metering requests according to a usage
     * plan.</p> <p> <code>HEADER</code> indicates whether to read the API key from the
     * X-API-Key header of a request.</p> <p> <code>AUTHORIZER</code> indicates whether
     * to read the API key from the <code>UsageIdentifierKey</code> from a custom
     * authorizer.</p>
     */
    inline const Aws::String& GetApiKeySource() const{ return m_apiKeySource; }

    /**
     * <p>The source of the API key for metering requests according to a usage
     * plan.</p> <p> <code>HEADER</code> indicates whether to read the API key from the
     * X-API-Key header of a request.</p> <p> <code>AUTHORIZER</code> indicates whether
     * to read the API key from the <code>UsageIdentifierKey</code> from a custom
     * authorizer.</p>
     */
    inline bool ApiKeySourceHasBeenSet() const { return m_apiKeySourceHasBeenSet; }

    /**
     * <p>The source of the API key for metering requests according to a usage
     * plan.</p> <p> <code>HEADER</code> indicates whether to read the API key from the
     * X-API-Key header of a request.</p> <p> <code>AUTHORIZER</code> indicates whether
     * to read the API key from the <code>UsageIdentifierKey</code> from a custom
     * authorizer.</p>
     */
    inline void SetApiKeySource(const Aws::String& value) { m_apiKeySourceHasBeenSet = true; m_apiKeySource = value; }

    /**
     * <p>The source of the API key for metering requests according to a usage
     * plan.</p> <p> <code>HEADER</code> indicates whether to read the API key from the
     * X-API-Key header of a request.</p> <p> <code>AUTHORIZER</code> indicates whether
     * to read the API key from the <code>UsageIdentifierKey</code> from a custom
     * authorizer.</p>
     */
    inline void SetApiKeySource(Aws::String&& value) { m_apiKeySourceHasBeenSet = true; m_apiKeySource = std::move(value); }

    /**
     * <p>The source of the API key for metering requests according to a usage
     * plan.</p> <p> <code>HEADER</code> indicates whether to read the API key from the
     * X-API-Key header of a request.</p> <p> <code>AUTHORIZER</code> indicates whether
     * to read the API key from the <code>UsageIdentifierKey</code> from a custom
     * authorizer.</p>
     */
    inline void SetApiKeySource(const char* value) { m_apiKeySourceHasBeenSet = true; m_apiKeySource.assign(value); }

    /**
     * <p>The source of the API key for metering requests according to a usage
     * plan.</p> <p> <code>HEADER</code> indicates whether to read the API key from the
     * X-API-Key header of a request.</p> <p> <code>AUTHORIZER</code> indicates whether
     * to read the API key from the <code>UsageIdentifierKey</code> from a custom
     * authorizer.</p>
     */
    inline AwsApiGatewayRestApiDetails& WithApiKeySource(const Aws::String& value) { SetApiKeySource(value); return *this;}

    /**
     * <p>The source of the API key for metering requests according to a usage
     * plan.</p> <p> <code>HEADER</code> indicates whether to read the API key from the
     * X-API-Key header of a request.</p> <p> <code>AUTHORIZER</code> indicates whether
     * to read the API key from the <code>UsageIdentifierKey</code> from a custom
     * authorizer.</p>
     */
    inline AwsApiGatewayRestApiDetails& WithApiKeySource(Aws::String&& value) { SetApiKeySource(std::move(value)); return *this;}

    /**
     * <p>The source of the API key for metering requests according to a usage
     * plan.</p> <p> <code>HEADER</code> indicates whether to read the API key from the
     * X-API-Key header of a request.</p> <p> <code>AUTHORIZER</code> indicates whether
     * to read the API key from the <code>UsageIdentifierKey</code> from a custom
     * authorizer.</p>
     */
    inline AwsApiGatewayRestApiDetails& WithApiKeySource(const char* value) { SetApiKeySource(value); return *this;}


    /**
     * <p>The endpoint configuration of the REST API.</p>
     */
    inline const AwsApiGatewayEndpointConfiguration& GetEndpointConfiguration() const{ return m_endpointConfiguration; }

    /**
     * <p>The endpoint configuration of the REST API.</p>
     */
    inline bool EndpointConfigurationHasBeenSet() const { return m_endpointConfigurationHasBeenSet; }

    /**
     * <p>The endpoint configuration of the REST API.</p>
     */
    inline void SetEndpointConfiguration(const AwsApiGatewayEndpointConfiguration& value) { m_endpointConfigurationHasBeenSet = true; m_endpointConfiguration = value; }

    /**
     * <p>The endpoint configuration of the REST API.</p>
     */
    inline void SetEndpointConfiguration(AwsApiGatewayEndpointConfiguration&& value) { m_endpointConfigurationHasBeenSet = true; m_endpointConfiguration = std::move(value); }

    /**
     * <p>The endpoint configuration of the REST API.</p>
     */
    inline AwsApiGatewayRestApiDetails& WithEndpointConfiguration(const AwsApiGatewayEndpointConfiguration& value) { SetEndpointConfiguration(value); return *this;}

    /**
     * <p>The endpoint configuration of the REST API.</p>
     */
    inline AwsApiGatewayRestApiDetails& WithEndpointConfiguration(AwsApiGatewayEndpointConfiguration&& value) { SetEndpointConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::Vector<Aws::String> m_binaryMediaTypes;
    bool m_binaryMediaTypesHasBeenSet = false;

    int m_minimumCompressionSize;
    bool m_minimumCompressionSizeHasBeenSet = false;

    Aws::String m_apiKeySource;
    bool m_apiKeySourceHasBeenSet = false;

    AwsApiGatewayEndpointConfiguration m_endpointConfiguration;
    bool m_endpointConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/Array.h>
#include <aws/apigateway/model/ApiKeysFormat.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace APIGateway
{
namespace Model
{

  /**
   * <p>The POST request to import API keys from an external source, such as a
   * CSV-formatted file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/ImportApiKeysRequest">AWS
   * API Reference</a></p>
   */
  class ImportApiKeysRequest : public StreamingAPIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API ImportApiKeysRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportApiKeys"; }

    AWS_APIGATEWAY_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>A query parameter to specify the input format to imported API keys.
     * Currently, only the <code>csv</code> format is supported.</p>
     */
    inline const ApiKeysFormat& GetFormat() const{ return m_format; }

    /**
     * <p>A query parameter to specify the input format to imported API keys.
     * Currently, only the <code>csv</code> format is supported.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>A query parameter to specify the input format to imported API keys.
     * Currently, only the <code>csv</code> format is supported.</p>
     */
    inline void SetFormat(const ApiKeysFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>A query parameter to specify the input format to imported API keys.
     * Currently, only the <code>csv</code> format is supported.</p>
     */
    inline void SetFormat(ApiKeysFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>A query parameter to specify the input format to imported API keys.
     * Currently, only the <code>csv</code> format is supported.</p>
     */
    inline ImportApiKeysRequest& WithFormat(const ApiKeysFormat& value) { SetFormat(value); return *this;}

    /**
     * <p>A query parameter to specify the input format to imported API keys.
     * Currently, only the <code>csv</code> format is supported.</p>
     */
    inline ImportApiKeysRequest& WithFormat(ApiKeysFormat&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p>A query parameter to indicate whether to rollback ApiKey importation
     * (<code>true</code>) or not (<code>false</code>) when error is encountered.</p>
     */
    inline bool GetFailOnWarnings() const{ return m_failOnWarnings; }

    /**
     * <p>A query parameter to indicate whether to rollback ApiKey importation
     * (<code>true</code>) or not (<code>false</code>) when error is encountered.</p>
     */
    inline bool FailOnWarningsHasBeenSet() const { return m_failOnWarningsHasBeenSet; }

    /**
     * <p>A query parameter to indicate whether to rollback ApiKey importation
     * (<code>true</code>) or not (<code>false</code>) when error is encountered.</p>
     */
    inline void SetFailOnWarnings(bool value) { m_failOnWarningsHasBeenSet = true; m_failOnWarnings = value; }

    /**
     * <p>A query parameter to indicate whether to rollback ApiKey importation
     * (<code>true</code>) or not (<code>false</code>) when error is encountered.</p>
     */
    inline ImportApiKeysRequest& WithFailOnWarnings(bool value) { SetFailOnWarnings(value); return *this;}

  private:


    ApiKeysFormat m_format;
    bool m_formatHasBeenSet = false;

    bool m_failOnWarnings;
    bool m_failOnWarningsHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws

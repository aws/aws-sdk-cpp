/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/model/ScraperStatusCode.h>
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
namespace PrometheusService
{
namespace Model
{

  /**
   * <p>The <code>ScraperStatus</code> structure contains status information about
   * the scraper.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/ScraperStatus">AWS
   * API Reference</a></p>
   */
  class ScraperStatus
  {
  public:
    AWS_PROMETHEUSSERVICE_API ScraperStatus();
    AWS_PROMETHEUSSERVICE_API ScraperStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API ScraperStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current status of the scraper.</p>
     */
    inline const ScraperStatusCode& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The current status of the scraper.</p>
     */
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

    /**
     * <p>The current status of the scraper.</p>
     */
    inline void SetStatusCode(const ScraperStatusCode& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>The current status of the scraper.</p>
     */
    inline void SetStatusCode(ScraperStatusCode&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }

    /**
     * <p>The current status of the scraper.</p>
     */
    inline ScraperStatus& WithStatusCode(const ScraperStatusCode& value) { SetStatusCode(value); return *this;}

    /**
     * <p>The current status of the scraper.</p>
     */
    inline ScraperStatus& WithStatusCode(ScraperStatusCode&& value) { SetStatusCode(std::move(value)); return *this;}

  private:

    ScraperStatusCode m_statusCode;
    bool m_statusCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws

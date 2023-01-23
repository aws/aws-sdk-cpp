/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/RevealConfiguration.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Macie2
{
namespace Model
{
  class GetRevealConfigurationResult
  {
  public:
    AWS_MACIE2_API GetRevealConfigurationResult();
    AWS_MACIE2_API GetRevealConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API GetRevealConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current configuration settings and the status of the configuration for
     * the account.</p>
     */
    inline const RevealConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The current configuration settings and the status of the configuration for
     * the account.</p>
     */
    inline void SetConfiguration(const RevealConfiguration& value) { m_configuration = value; }

    /**
     * <p>The current configuration settings and the status of the configuration for
     * the account.</p>
     */
    inline void SetConfiguration(RevealConfiguration&& value) { m_configuration = std::move(value); }

    /**
     * <p>The current configuration settings and the status of the configuration for
     * the account.</p>
     */
    inline GetRevealConfigurationResult& WithConfiguration(const RevealConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The current configuration settings and the status of the configuration for
     * the account.</p>
     */
    inline GetRevealConfigurationResult& WithConfiguration(RevealConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}

  private:

    RevealConfiguration m_configuration;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws

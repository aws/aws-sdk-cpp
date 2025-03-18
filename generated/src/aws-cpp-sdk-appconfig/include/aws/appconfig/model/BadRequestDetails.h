/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appconfig/model/InvalidConfigurationDetail.h>
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
namespace AppConfig
{
namespace Model
{

  /**
   * <p>Detailed information about the input that failed to satisfy the constraints
   * specified by a call.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/BadRequestDetails">AWS
   * API Reference</a></p>
   */
  class BadRequestDetails
  {
  public:
    AWS_APPCONFIG_API BadRequestDetails() = default;
    AWS_APPCONFIG_API BadRequestDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API BadRequestDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Detailed information about the bad request exception error when creating a
     * hosted configuration version.</p>
     */
    inline const Aws::Vector<InvalidConfigurationDetail>& GetInvalidConfiguration() const { return m_invalidConfiguration; }
    inline bool InvalidConfigurationHasBeenSet() const { return m_invalidConfigurationHasBeenSet; }
    template<typename InvalidConfigurationT = Aws::Vector<InvalidConfigurationDetail>>
    void SetInvalidConfiguration(InvalidConfigurationT&& value) { m_invalidConfigurationHasBeenSet = true; m_invalidConfiguration = std::forward<InvalidConfigurationT>(value); }
    template<typename InvalidConfigurationT = Aws::Vector<InvalidConfigurationDetail>>
    BadRequestDetails& WithInvalidConfiguration(InvalidConfigurationT&& value) { SetInvalidConfiguration(std::forward<InvalidConfigurationT>(value)); return *this;}
    template<typename InvalidConfigurationT = InvalidConfigurationDetail>
    BadRequestDetails& AddInvalidConfiguration(InvalidConfigurationT&& value) { m_invalidConfigurationHasBeenSet = true; m_invalidConfiguration.emplace_back(std::forward<InvalidConfigurationT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<InvalidConfigurationDetail> m_invalidConfiguration;
    bool m_invalidConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws

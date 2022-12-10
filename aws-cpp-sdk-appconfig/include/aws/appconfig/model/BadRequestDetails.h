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
    AWS_APPCONFIG_API BadRequestDetails();
    AWS_APPCONFIG_API BadRequestDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API BadRequestDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Detailed information about the bad request exception error when creating a
     * hosted configuration version.</p>
     */
    inline const Aws::Vector<InvalidConfigurationDetail>& GetInvalidConfiguration() const{ return m_invalidConfiguration; }

    /**
     * <p>Detailed information about the bad request exception error when creating a
     * hosted configuration version.</p>
     */
    inline bool InvalidConfigurationHasBeenSet() const { return m_invalidConfigurationHasBeenSet; }

    /**
     * <p>Detailed information about the bad request exception error when creating a
     * hosted configuration version.</p>
     */
    inline void SetInvalidConfiguration(const Aws::Vector<InvalidConfigurationDetail>& value) { m_invalidConfigurationHasBeenSet = true; m_invalidConfiguration = value; }

    /**
     * <p>Detailed information about the bad request exception error when creating a
     * hosted configuration version.</p>
     */
    inline void SetInvalidConfiguration(Aws::Vector<InvalidConfigurationDetail>&& value) { m_invalidConfigurationHasBeenSet = true; m_invalidConfiguration = std::move(value); }

    /**
     * <p>Detailed information about the bad request exception error when creating a
     * hosted configuration version.</p>
     */
    inline BadRequestDetails& WithInvalidConfiguration(const Aws::Vector<InvalidConfigurationDetail>& value) { SetInvalidConfiguration(value); return *this;}

    /**
     * <p>Detailed information about the bad request exception error when creating a
     * hosted configuration version.</p>
     */
    inline BadRequestDetails& WithInvalidConfiguration(Aws::Vector<InvalidConfigurationDetail>&& value) { SetInvalidConfiguration(std::move(value)); return *this;}

    /**
     * <p>Detailed information about the bad request exception error when creating a
     * hosted configuration version.</p>
     */
    inline BadRequestDetails& AddInvalidConfiguration(const InvalidConfigurationDetail& value) { m_invalidConfigurationHasBeenSet = true; m_invalidConfiguration.push_back(value); return *this; }

    /**
     * <p>Detailed information about the bad request exception error when creating a
     * hosted configuration version.</p>
     */
    inline BadRequestDetails& AddInvalidConfiguration(InvalidConfigurationDetail&& value) { m_invalidConfigurationHasBeenSet = true; m_invalidConfiguration.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<InvalidConfigurationDetail> m_invalidConfiguration;
    bool m_invalidConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws

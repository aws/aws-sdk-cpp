/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/MalwareProtectionConfigurationResult.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Specifies the names of the data sources that couldn't be
   * enabled.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UnprocessedDataSourcesResult">AWS
   * API Reference</a></p>
   */
  class UnprocessedDataSourcesResult
  {
  public:
    AWS_GUARDDUTY_API UnprocessedDataSourcesResult();
    AWS_GUARDDUTY_API UnprocessedDataSourcesResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API UnprocessedDataSourcesResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const MalwareProtectionConfigurationResult& GetMalwareProtection() const{ return m_malwareProtection; }

    
    inline bool MalwareProtectionHasBeenSet() const { return m_malwareProtectionHasBeenSet; }

    
    inline void SetMalwareProtection(const MalwareProtectionConfigurationResult& value) { m_malwareProtectionHasBeenSet = true; m_malwareProtection = value; }

    
    inline void SetMalwareProtection(MalwareProtectionConfigurationResult&& value) { m_malwareProtectionHasBeenSet = true; m_malwareProtection = std::move(value); }

    
    inline UnprocessedDataSourcesResult& WithMalwareProtection(const MalwareProtectionConfigurationResult& value) { SetMalwareProtection(value); return *this;}

    
    inline UnprocessedDataSourcesResult& WithMalwareProtection(MalwareProtectionConfigurationResult&& value) { SetMalwareProtection(std::move(value)); return *this;}

  private:

    MalwareProtectionConfigurationResult m_malwareProtection;
    bool m_malwareProtectionHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws

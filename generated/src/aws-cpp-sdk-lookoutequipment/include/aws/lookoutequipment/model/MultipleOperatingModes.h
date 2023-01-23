/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/model/StatisticalIssueStatus.h>
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
namespace LookoutEquipment
{
namespace Model
{

  /**
   * <p> Entity that comprises information on operating modes in data. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/MultipleOperatingModes">AWS
   * API Reference</a></p>
   */
  class MultipleOperatingModes
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API MultipleOperatingModes();
    AWS_LOOKOUTEQUIPMENT_API MultipleOperatingModes(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API MultipleOperatingModes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Indicates whether there is a potential data issue related to having multiple
     * operating modes. </p>
     */
    inline const StatisticalIssueStatus& GetStatus() const{ return m_status; }

    /**
     * <p> Indicates whether there is a potential data issue related to having multiple
     * operating modes. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> Indicates whether there is a potential data issue related to having multiple
     * operating modes. </p>
     */
    inline void SetStatus(const StatisticalIssueStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> Indicates whether there is a potential data issue related to having multiple
     * operating modes. </p>
     */
    inline void SetStatus(StatisticalIssueStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> Indicates whether there is a potential data issue related to having multiple
     * operating modes. </p>
     */
    inline MultipleOperatingModes& WithStatus(const StatisticalIssueStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> Indicates whether there is a potential data issue related to having multiple
     * operating modes. </p>
     */
    inline MultipleOperatingModes& WithStatus(StatisticalIssueStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    StatisticalIssueStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws

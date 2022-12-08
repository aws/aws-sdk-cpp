/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DashboardSourceTemplate.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Dashboard source entity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DashboardSourceEntity">AWS
   * API Reference</a></p>
   */
  class DashboardSourceEntity
  {
  public:
    AWS_QUICKSIGHT_API DashboardSourceEntity();
    AWS_QUICKSIGHT_API DashboardSourceEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DashboardSourceEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Source template.</p>
     */
    inline const DashboardSourceTemplate& GetSourceTemplate() const{ return m_sourceTemplate; }

    /**
     * <p>Source template.</p>
     */
    inline bool SourceTemplateHasBeenSet() const { return m_sourceTemplateHasBeenSet; }

    /**
     * <p>Source template.</p>
     */
    inline void SetSourceTemplate(const DashboardSourceTemplate& value) { m_sourceTemplateHasBeenSet = true; m_sourceTemplate = value; }

    /**
     * <p>Source template.</p>
     */
    inline void SetSourceTemplate(DashboardSourceTemplate&& value) { m_sourceTemplateHasBeenSet = true; m_sourceTemplate = std::move(value); }

    /**
     * <p>Source template.</p>
     */
    inline DashboardSourceEntity& WithSourceTemplate(const DashboardSourceTemplate& value) { SetSourceTemplate(value); return *this;}

    /**
     * <p>Source template.</p>
     */
    inline DashboardSourceEntity& WithSourceTemplate(DashboardSourceTemplate&& value) { SetSourceTemplate(std::move(value)); return *this;}

  private:

    DashboardSourceTemplate m_sourceTemplate;
    bool m_sourceTemplateHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

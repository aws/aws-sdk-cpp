/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail/model/DashboardType.h>
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
namespace CloudTrail
{
namespace Model
{

  /**
   * <p> Provides information about a CloudTrail Lake dashboard. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/DashboardDetail">AWS
   * API Reference</a></p>
   */
  class DashboardDetail
  {
  public:
    AWS_CLOUDTRAIL_API DashboardDetail();
    AWS_CLOUDTRAIL_API DashboardDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API DashboardDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ARN for the dashboard. </p>
     */
    inline const Aws::String& GetDashboardArn() const{ return m_dashboardArn; }
    inline bool DashboardArnHasBeenSet() const { return m_dashboardArnHasBeenSet; }
    inline void SetDashboardArn(const Aws::String& value) { m_dashboardArnHasBeenSet = true; m_dashboardArn = value; }
    inline void SetDashboardArn(Aws::String&& value) { m_dashboardArnHasBeenSet = true; m_dashboardArn = std::move(value); }
    inline void SetDashboardArn(const char* value) { m_dashboardArnHasBeenSet = true; m_dashboardArn.assign(value); }
    inline DashboardDetail& WithDashboardArn(const Aws::String& value) { SetDashboardArn(value); return *this;}
    inline DashboardDetail& WithDashboardArn(Aws::String&& value) { SetDashboardArn(std::move(value)); return *this;}
    inline DashboardDetail& WithDashboardArn(const char* value) { SetDashboardArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of dashboard. </p>
     */
    inline const DashboardType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const DashboardType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(DashboardType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline DashboardDetail& WithType(const DashboardType& value) { SetType(value); return *this;}
    inline DashboardDetail& WithType(DashboardType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_dashboardArn;
    bool m_dashboardArnHasBeenSet = false;

    DashboardType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws

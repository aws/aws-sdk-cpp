/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Information about a CloudWatch dashboard.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CloudWatchDashboard">AWS
   * API Reference</a></p>
   */
  class CloudWatchDashboard
  {
  public:
    AWS_SERVICECATALOG_API CloudWatchDashboard();
    AWS_SERVICECATALOG_API CloudWatchDashboard(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API CloudWatchDashboard& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the CloudWatch dashboard.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the CloudWatch dashboard.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the CloudWatch dashboard.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the CloudWatch dashboard.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the CloudWatch dashboard.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the CloudWatch dashboard.</p>
     */
    inline CloudWatchDashboard& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the CloudWatch dashboard.</p>
     */
    inline CloudWatchDashboard& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the CloudWatch dashboard.</p>
     */
    inline CloudWatchDashboard& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws

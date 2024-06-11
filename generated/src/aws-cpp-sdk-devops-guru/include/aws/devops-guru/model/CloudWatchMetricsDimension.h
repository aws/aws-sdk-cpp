/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p> The dimension of an Amazon CloudWatch metric that is used when DevOps Guru
   * analyzes the resources in your account for operational problems and anomalous
   * behavior. A dimension is a name/value pair that is part of the identity of a
   * metric. A metric can have up to 10 dimensions. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch_concepts.html#Dimension">Dimensions</a>
   * in the <i>Amazon CloudWatch User Guide</i>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/CloudWatchMetricsDimension">AWS
   * API Reference</a></p>
   */
  class CloudWatchMetricsDimension
  {
  public:
    AWS_DEVOPSGURU_API CloudWatchMetricsDimension();
    AWS_DEVOPSGURU_API CloudWatchMetricsDimension(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API CloudWatchMetricsDimension& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the CloudWatch dimension. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CloudWatchMetricsDimension& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CloudWatchMetricsDimension& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CloudWatchMetricsDimension& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The value of the CloudWatch dimension. </p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline CloudWatchMetricsDimension& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline CloudWatchMetricsDimension& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline CloudWatchMetricsDimension& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws

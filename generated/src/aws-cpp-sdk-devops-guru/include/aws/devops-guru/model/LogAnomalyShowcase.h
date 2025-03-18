/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-guru/model/LogAnomalyClass.h>
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
   * <p> A cluster of similar anomalous log events found within a log group.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/LogAnomalyShowcase">AWS
   * API Reference</a></p>
   */
  class LogAnomalyShowcase
  {
  public:
    AWS_DEVOPSGURU_API LogAnomalyShowcase() = default;
    AWS_DEVOPSGURU_API LogAnomalyShowcase(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API LogAnomalyShowcase& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A list of anomalous log events that may be related. </p>
     */
    inline const Aws::Vector<LogAnomalyClass>& GetLogAnomalyClasses() const { return m_logAnomalyClasses; }
    inline bool LogAnomalyClassesHasBeenSet() const { return m_logAnomalyClassesHasBeenSet; }
    template<typename LogAnomalyClassesT = Aws::Vector<LogAnomalyClass>>
    void SetLogAnomalyClasses(LogAnomalyClassesT&& value) { m_logAnomalyClassesHasBeenSet = true; m_logAnomalyClasses = std::forward<LogAnomalyClassesT>(value); }
    template<typename LogAnomalyClassesT = Aws::Vector<LogAnomalyClass>>
    LogAnomalyShowcase& WithLogAnomalyClasses(LogAnomalyClassesT&& value) { SetLogAnomalyClasses(std::forward<LogAnomalyClassesT>(value)); return *this;}
    template<typename LogAnomalyClassesT = LogAnomalyClass>
    LogAnomalyShowcase& AddLogAnomalyClasses(LogAnomalyClassesT&& value) { m_logAnomalyClassesHasBeenSet = true; m_logAnomalyClasses.emplace_back(std::forward<LogAnomalyClassesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<LogAnomalyClass> m_logAnomalyClasses;
    bool m_logAnomalyClassesHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws

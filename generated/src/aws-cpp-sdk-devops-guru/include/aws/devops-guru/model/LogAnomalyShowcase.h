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
    AWS_DEVOPSGURU_API LogAnomalyShowcase();
    AWS_DEVOPSGURU_API LogAnomalyShowcase(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API LogAnomalyShowcase& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A list of anomalous log events that may be related. </p>
     */
    inline const Aws::Vector<LogAnomalyClass>& GetLogAnomalyClasses() const{ return m_logAnomalyClasses; }

    /**
     * <p> A list of anomalous log events that may be related. </p>
     */
    inline bool LogAnomalyClassesHasBeenSet() const { return m_logAnomalyClassesHasBeenSet; }

    /**
     * <p> A list of anomalous log events that may be related. </p>
     */
    inline void SetLogAnomalyClasses(const Aws::Vector<LogAnomalyClass>& value) { m_logAnomalyClassesHasBeenSet = true; m_logAnomalyClasses = value; }

    /**
     * <p> A list of anomalous log events that may be related. </p>
     */
    inline void SetLogAnomalyClasses(Aws::Vector<LogAnomalyClass>&& value) { m_logAnomalyClassesHasBeenSet = true; m_logAnomalyClasses = std::move(value); }

    /**
     * <p> A list of anomalous log events that may be related. </p>
     */
    inline LogAnomalyShowcase& WithLogAnomalyClasses(const Aws::Vector<LogAnomalyClass>& value) { SetLogAnomalyClasses(value); return *this;}

    /**
     * <p> A list of anomalous log events that may be related. </p>
     */
    inline LogAnomalyShowcase& WithLogAnomalyClasses(Aws::Vector<LogAnomalyClass>&& value) { SetLogAnomalyClasses(std::move(value)); return *this;}

    /**
     * <p> A list of anomalous log events that may be related. </p>
     */
    inline LogAnomalyShowcase& AddLogAnomalyClasses(const LogAnomalyClass& value) { m_logAnomalyClassesHasBeenSet = true; m_logAnomalyClasses.push_back(value); return *this; }

    /**
     * <p> A list of anomalous log events that may be related. </p>
     */
    inline LogAnomalyShowcase& AddLogAnomalyClasses(LogAnomalyClass&& value) { m_logAnomalyClassesHasBeenSet = true; m_logAnomalyClasses.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<LogAnomalyClass> m_logAnomalyClasses;
    bool m_logAnomalyClassesHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws

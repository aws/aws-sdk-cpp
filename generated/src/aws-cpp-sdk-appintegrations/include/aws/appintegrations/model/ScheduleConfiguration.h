/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
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
namespace AppIntegrationsService
{
namespace Model
{

  /**
   * <p>The name of the data and how often it should be pulled from the
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/ScheduleConfiguration">AWS
   * API Reference</a></p>
   */
  class ScheduleConfiguration
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API ScheduleConfiguration() = default;
    AWS_APPINTEGRATIONSSERVICE_API ScheduleConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API ScheduleConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The start date for objects to import in the first flow run as an Unix/epoch
     * timestamp in milliseconds or in ISO-8601 format.</p>
     */
    inline const Aws::String& GetFirstExecutionFrom() const { return m_firstExecutionFrom; }
    inline bool FirstExecutionFromHasBeenSet() const { return m_firstExecutionFromHasBeenSet; }
    template<typename FirstExecutionFromT = Aws::String>
    void SetFirstExecutionFrom(FirstExecutionFromT&& value) { m_firstExecutionFromHasBeenSet = true; m_firstExecutionFrom = std::forward<FirstExecutionFromT>(value); }
    template<typename FirstExecutionFromT = Aws::String>
    ScheduleConfiguration& WithFirstExecutionFrom(FirstExecutionFromT&& value) { SetFirstExecutionFrom(std::forward<FirstExecutionFromT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the object to pull from the data source.</p>
     */
    inline const Aws::String& GetObject() const { return m_object; }
    inline bool ObjectHasBeenSet() const { return m_objectHasBeenSet; }
    template<typename ObjectT = Aws::String>
    void SetObject(ObjectT&& value) { m_objectHasBeenSet = true; m_object = std::forward<ObjectT>(value); }
    template<typename ObjectT = Aws::String>
    ScheduleConfiguration& WithObject(ObjectT&& value) { SetObject(std::forward<ObjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How often the data should be pulled from data source.</p>
     */
    inline const Aws::String& GetScheduleExpression() const { return m_scheduleExpression; }
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }
    template<typename ScheduleExpressionT = Aws::String>
    void SetScheduleExpression(ScheduleExpressionT&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::forward<ScheduleExpressionT>(value); }
    template<typename ScheduleExpressionT = Aws::String>
    ScheduleConfiguration& WithScheduleExpression(ScheduleExpressionT&& value) { SetScheduleExpression(std::forward<ScheduleExpressionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_firstExecutionFrom;
    bool m_firstExecutionFromHasBeenSet = false;

    Aws::String m_object;
    bool m_objectHasBeenSet = false;

    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws

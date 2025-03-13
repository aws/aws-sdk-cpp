/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
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
namespace ForecastService
{
namespace Model
{

  /**
   * <p>Provides information about the Explainability resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ExplainabilityInfo">AWS
   * API Reference</a></p>
   */
  class ExplainabilityInfo
  {
  public:
    AWS_FORECASTSERVICE_API ExplainabilityInfo() = default;
    AWS_FORECASTSERVICE_API ExplainabilityInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API ExplainabilityInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability.</p>
     */
    inline const Aws::String& GetExplainabilityArn() const { return m_explainabilityArn; }
    inline bool ExplainabilityArnHasBeenSet() const { return m_explainabilityArnHasBeenSet; }
    template<typename ExplainabilityArnT = Aws::String>
    void SetExplainabilityArn(ExplainabilityArnT&& value) { m_explainabilityArnHasBeenSet = true; m_explainabilityArn = std::forward<ExplainabilityArnT>(value); }
    template<typename ExplainabilityArnT = Aws::String>
    ExplainabilityInfo& WithExplainabilityArn(ExplainabilityArnT&& value) { SetExplainabilityArn(std::forward<ExplainabilityArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Explainability. States include: </p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    ExplainabilityInfo& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_explainabilityArn;
    bool m_explainabilityArnHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws

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
    AWS_FORECASTSERVICE_API ExplainabilityInfo();
    AWS_FORECASTSERVICE_API ExplainabilityInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API ExplainabilityInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability.</p>
     */
    inline const Aws::String& GetExplainabilityArn() const{ return m_explainabilityArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability.</p>
     */
    inline bool ExplainabilityArnHasBeenSet() const { return m_explainabilityArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability.</p>
     */
    inline void SetExplainabilityArn(const Aws::String& value) { m_explainabilityArnHasBeenSet = true; m_explainabilityArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability.</p>
     */
    inline void SetExplainabilityArn(Aws::String&& value) { m_explainabilityArnHasBeenSet = true; m_explainabilityArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability.</p>
     */
    inline void SetExplainabilityArn(const char* value) { m_explainabilityArnHasBeenSet = true; m_explainabilityArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability.</p>
     */
    inline ExplainabilityInfo& WithExplainabilityArn(const Aws::String& value) { SetExplainabilityArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability.</p>
     */
    inline ExplainabilityInfo& WithExplainabilityArn(Aws::String&& value) { SetExplainabilityArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability.</p>
     */
    inline ExplainabilityInfo& WithExplainabilityArn(const char* value) { SetExplainabilityArn(value); return *this;}


    /**
     * <p>The status of the Explainability. States include: </p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the Explainability. States include: </p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the Explainability. States include: </p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the Explainability. States include: </p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the Explainability. States include: </p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the Explainability. States include: </p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline ExplainabilityInfo& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the Explainability. States include: </p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline ExplainabilityInfo& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the Explainability. States include: </p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline ExplainabilityInfo& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_explainabilityArn;
    bool m_explainabilityArnHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws

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

  class AWS_FORECASTSERVICE_API ExplainabilityInfo
  {
  public:
    ExplainabilityInfo();
    ExplainabilityInfo(Aws::Utils::Json::JsonView jsonValue);
    ExplainabilityInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetExplainabilityArn() const{ return m_explainabilityArn; }

    
    inline bool ExplainabilityArnHasBeenSet() const { return m_explainabilityArnHasBeenSet; }

    
    inline void SetExplainabilityArn(const Aws::String& value) { m_explainabilityArnHasBeenSet = true; m_explainabilityArn = value; }

    
    inline void SetExplainabilityArn(Aws::String&& value) { m_explainabilityArnHasBeenSet = true; m_explainabilityArn = std::move(value); }

    
    inline void SetExplainabilityArn(const char* value) { m_explainabilityArnHasBeenSet = true; m_explainabilityArn.assign(value); }

    
    inline ExplainabilityInfo& WithExplainabilityArn(const Aws::String& value) { SetExplainabilityArn(value); return *this;}

    
    inline ExplainabilityInfo& WithExplainabilityArn(Aws::String&& value) { SetExplainabilityArn(std::move(value)); return *this;}

    
    inline ExplainabilityInfo& WithExplainabilityArn(const char* value) { SetExplainabilityArn(value); return *this;}


    
    inline const Aws::String& GetStatus() const{ return m_status; }

    
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    
    inline ExplainabilityInfo& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    
    inline ExplainabilityInfo& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    
    inline ExplainabilityInfo& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_explainabilityArn;
    bool m_explainabilityArnHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws

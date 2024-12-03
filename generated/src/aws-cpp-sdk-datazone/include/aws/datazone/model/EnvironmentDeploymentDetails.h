/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/datazone/model/OverallDeploymentStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/EnvironmentError.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The environment deployment details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/EnvironmentDeploymentDetails">AWS
   * API Reference</a></p>
   */
  class EnvironmentDeploymentDetails
  {
  public:
    AWS_DATAZONE_API EnvironmentDeploymentDetails();
    AWS_DATAZONE_API EnvironmentDeploymentDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API EnvironmentDeploymentDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Environment failure reasons.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<EnvironmentError>>& GetEnvironmentFailureReasons() const{ return m_environmentFailureReasons; }
    inline bool EnvironmentFailureReasonsHasBeenSet() const { return m_environmentFailureReasonsHasBeenSet; }
    inline void SetEnvironmentFailureReasons(const Aws::Map<Aws::String, Aws::Vector<EnvironmentError>>& value) { m_environmentFailureReasonsHasBeenSet = true; m_environmentFailureReasons = value; }
    inline void SetEnvironmentFailureReasons(Aws::Map<Aws::String, Aws::Vector<EnvironmentError>>&& value) { m_environmentFailureReasonsHasBeenSet = true; m_environmentFailureReasons = std::move(value); }
    inline EnvironmentDeploymentDetails& WithEnvironmentFailureReasons(const Aws::Map<Aws::String, Aws::Vector<EnvironmentError>>& value) { SetEnvironmentFailureReasons(value); return *this;}
    inline EnvironmentDeploymentDetails& WithEnvironmentFailureReasons(Aws::Map<Aws::String, Aws::Vector<EnvironmentError>>&& value) { SetEnvironmentFailureReasons(std::move(value)); return *this;}
    inline EnvironmentDeploymentDetails& AddEnvironmentFailureReasons(const Aws::String& key, const Aws::Vector<EnvironmentError>& value) { m_environmentFailureReasonsHasBeenSet = true; m_environmentFailureReasons.emplace(key, value); return *this; }
    inline EnvironmentDeploymentDetails& AddEnvironmentFailureReasons(Aws::String&& key, const Aws::Vector<EnvironmentError>& value) { m_environmentFailureReasonsHasBeenSet = true; m_environmentFailureReasons.emplace(std::move(key), value); return *this; }
    inline EnvironmentDeploymentDetails& AddEnvironmentFailureReasons(const Aws::String& key, Aws::Vector<EnvironmentError>&& value) { m_environmentFailureReasonsHasBeenSet = true; m_environmentFailureReasons.emplace(key, std::move(value)); return *this; }
    inline EnvironmentDeploymentDetails& AddEnvironmentFailureReasons(Aws::String&& key, Aws::Vector<EnvironmentError>&& value) { m_environmentFailureReasonsHasBeenSet = true; m_environmentFailureReasons.emplace(std::move(key), std::move(value)); return *this; }
    inline EnvironmentDeploymentDetails& AddEnvironmentFailureReasons(const char* key, Aws::Vector<EnvironmentError>&& value) { m_environmentFailureReasonsHasBeenSet = true; m_environmentFailureReasons.emplace(key, std::move(value)); return *this; }
    inline EnvironmentDeploymentDetails& AddEnvironmentFailureReasons(const char* key, const Aws::Vector<EnvironmentError>& value) { m_environmentFailureReasonsHasBeenSet = true; m_environmentFailureReasons.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The overall deployment status of the environment.</p>
     */
    inline const OverallDeploymentStatus& GetOverallDeploymentStatus() const{ return m_overallDeploymentStatus; }
    inline bool OverallDeploymentStatusHasBeenSet() const { return m_overallDeploymentStatusHasBeenSet; }
    inline void SetOverallDeploymentStatus(const OverallDeploymentStatus& value) { m_overallDeploymentStatusHasBeenSet = true; m_overallDeploymentStatus = value; }
    inline void SetOverallDeploymentStatus(OverallDeploymentStatus&& value) { m_overallDeploymentStatusHasBeenSet = true; m_overallDeploymentStatus = std::move(value); }
    inline EnvironmentDeploymentDetails& WithOverallDeploymentStatus(const OverallDeploymentStatus& value) { SetOverallDeploymentStatus(value); return *this;}
    inline EnvironmentDeploymentDetails& WithOverallDeploymentStatus(OverallDeploymentStatus&& value) { SetOverallDeploymentStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::Vector<EnvironmentError>> m_environmentFailureReasons;
    bool m_environmentFailureReasonsHasBeenSet = false;

    OverallDeploymentStatus m_overallDeploymentStatus;
    bool m_overallDeploymentStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws

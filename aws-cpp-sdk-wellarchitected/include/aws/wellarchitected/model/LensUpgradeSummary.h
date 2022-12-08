/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
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
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>Lens upgrade summary return object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/LensUpgradeSummary">AWS
   * API Reference</a></p>
   */
  class LensUpgradeSummary
  {
  public:
    AWS_WELLARCHITECTED_API LensUpgradeSummary();
    AWS_WELLARCHITECTED_API LensUpgradeSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API LensUpgradeSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetWorkloadId() const{ return m_workloadId; }

    
    inline bool WorkloadIdHasBeenSet() const { return m_workloadIdHasBeenSet; }

    
    inline void SetWorkloadId(const Aws::String& value) { m_workloadIdHasBeenSet = true; m_workloadId = value; }

    
    inline void SetWorkloadId(Aws::String&& value) { m_workloadIdHasBeenSet = true; m_workloadId = std::move(value); }

    
    inline void SetWorkloadId(const char* value) { m_workloadIdHasBeenSet = true; m_workloadId.assign(value); }

    
    inline LensUpgradeSummary& WithWorkloadId(const Aws::String& value) { SetWorkloadId(value); return *this;}

    
    inline LensUpgradeSummary& WithWorkloadId(Aws::String&& value) { SetWorkloadId(std::move(value)); return *this;}

    
    inline LensUpgradeSummary& WithWorkloadId(const char* value) { SetWorkloadId(value); return *this;}


    
    inline const Aws::String& GetWorkloadName() const{ return m_workloadName; }

    
    inline bool WorkloadNameHasBeenSet() const { return m_workloadNameHasBeenSet; }

    
    inline void SetWorkloadName(const Aws::String& value) { m_workloadNameHasBeenSet = true; m_workloadName = value; }

    
    inline void SetWorkloadName(Aws::String&& value) { m_workloadNameHasBeenSet = true; m_workloadName = std::move(value); }

    
    inline void SetWorkloadName(const char* value) { m_workloadNameHasBeenSet = true; m_workloadName.assign(value); }

    
    inline LensUpgradeSummary& WithWorkloadName(const Aws::String& value) { SetWorkloadName(value); return *this;}

    
    inline LensUpgradeSummary& WithWorkloadName(Aws::String&& value) { SetWorkloadName(std::move(value)); return *this;}

    
    inline LensUpgradeSummary& WithWorkloadName(const char* value) { SetWorkloadName(value); return *this;}


    
    inline const Aws::String& GetLensAlias() const{ return m_lensAlias; }

    
    inline bool LensAliasHasBeenSet() const { return m_lensAliasHasBeenSet; }

    
    inline void SetLensAlias(const Aws::String& value) { m_lensAliasHasBeenSet = true; m_lensAlias = value; }

    
    inline void SetLensAlias(Aws::String&& value) { m_lensAliasHasBeenSet = true; m_lensAlias = std::move(value); }

    
    inline void SetLensAlias(const char* value) { m_lensAliasHasBeenSet = true; m_lensAlias.assign(value); }

    
    inline LensUpgradeSummary& WithLensAlias(const Aws::String& value) { SetLensAlias(value); return *this;}

    
    inline LensUpgradeSummary& WithLensAlias(Aws::String&& value) { SetLensAlias(std::move(value)); return *this;}

    
    inline LensUpgradeSummary& WithLensAlias(const char* value) { SetLensAlias(value); return *this;}


    /**
     * <p>The ARN for the lens.</p>
     */
    inline const Aws::String& GetLensArn() const{ return m_lensArn; }

    /**
     * <p>The ARN for the lens.</p>
     */
    inline bool LensArnHasBeenSet() const { return m_lensArnHasBeenSet; }

    /**
     * <p>The ARN for the lens.</p>
     */
    inline void SetLensArn(const Aws::String& value) { m_lensArnHasBeenSet = true; m_lensArn = value; }

    /**
     * <p>The ARN for the lens.</p>
     */
    inline void SetLensArn(Aws::String&& value) { m_lensArnHasBeenSet = true; m_lensArn = std::move(value); }

    /**
     * <p>The ARN for the lens.</p>
     */
    inline void SetLensArn(const char* value) { m_lensArnHasBeenSet = true; m_lensArn.assign(value); }

    /**
     * <p>The ARN for the lens.</p>
     */
    inline LensUpgradeSummary& WithLensArn(const Aws::String& value) { SetLensArn(value); return *this;}

    /**
     * <p>The ARN for the lens.</p>
     */
    inline LensUpgradeSummary& WithLensArn(Aws::String&& value) { SetLensArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the lens.</p>
     */
    inline LensUpgradeSummary& WithLensArn(const char* value) { SetLensArn(value); return *this;}


    /**
     * <p>The current version of the lens.</p>
     */
    inline const Aws::String& GetCurrentLensVersion() const{ return m_currentLensVersion; }

    /**
     * <p>The current version of the lens.</p>
     */
    inline bool CurrentLensVersionHasBeenSet() const { return m_currentLensVersionHasBeenSet; }

    /**
     * <p>The current version of the lens.</p>
     */
    inline void SetCurrentLensVersion(const Aws::String& value) { m_currentLensVersionHasBeenSet = true; m_currentLensVersion = value; }

    /**
     * <p>The current version of the lens.</p>
     */
    inline void SetCurrentLensVersion(Aws::String&& value) { m_currentLensVersionHasBeenSet = true; m_currentLensVersion = std::move(value); }

    /**
     * <p>The current version of the lens.</p>
     */
    inline void SetCurrentLensVersion(const char* value) { m_currentLensVersionHasBeenSet = true; m_currentLensVersion.assign(value); }

    /**
     * <p>The current version of the lens.</p>
     */
    inline LensUpgradeSummary& WithCurrentLensVersion(const Aws::String& value) { SetCurrentLensVersion(value); return *this;}

    /**
     * <p>The current version of the lens.</p>
     */
    inline LensUpgradeSummary& WithCurrentLensVersion(Aws::String&& value) { SetCurrentLensVersion(std::move(value)); return *this;}

    /**
     * <p>The current version of the lens.</p>
     */
    inline LensUpgradeSummary& WithCurrentLensVersion(const char* value) { SetCurrentLensVersion(value); return *this;}


    /**
     * <p>The latest version of the lens.</p>
     */
    inline const Aws::String& GetLatestLensVersion() const{ return m_latestLensVersion; }

    /**
     * <p>The latest version of the lens.</p>
     */
    inline bool LatestLensVersionHasBeenSet() const { return m_latestLensVersionHasBeenSet; }

    /**
     * <p>The latest version of the lens.</p>
     */
    inline void SetLatestLensVersion(const Aws::String& value) { m_latestLensVersionHasBeenSet = true; m_latestLensVersion = value; }

    /**
     * <p>The latest version of the lens.</p>
     */
    inline void SetLatestLensVersion(Aws::String&& value) { m_latestLensVersionHasBeenSet = true; m_latestLensVersion = std::move(value); }

    /**
     * <p>The latest version of the lens.</p>
     */
    inline void SetLatestLensVersion(const char* value) { m_latestLensVersionHasBeenSet = true; m_latestLensVersion.assign(value); }

    /**
     * <p>The latest version of the lens.</p>
     */
    inline LensUpgradeSummary& WithLatestLensVersion(const Aws::String& value) { SetLatestLensVersion(value); return *this;}

    /**
     * <p>The latest version of the lens.</p>
     */
    inline LensUpgradeSummary& WithLatestLensVersion(Aws::String&& value) { SetLatestLensVersion(std::move(value)); return *this;}

    /**
     * <p>The latest version of the lens.</p>
     */
    inline LensUpgradeSummary& WithLatestLensVersion(const char* value) { SetLatestLensVersion(value); return *this;}

  private:

    Aws::String m_workloadId;
    bool m_workloadIdHasBeenSet = false;

    Aws::String m_workloadName;
    bool m_workloadNameHasBeenSet = false;

    Aws::String m_lensAlias;
    bool m_lensAliasHasBeenSet = false;

    Aws::String m_lensArn;
    bool m_lensArnHasBeenSet = false;

    Aws::String m_currentLensVersion;
    bool m_currentLensVersionHasBeenSet = false;

    Aws::String m_latestLensVersion;
    bool m_latestLensVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws

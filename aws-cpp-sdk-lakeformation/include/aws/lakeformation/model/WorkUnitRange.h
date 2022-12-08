/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
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
namespace LakeFormation
{
namespace Model
{

  /**
   * <p>Defines the valid range of work unit IDs for querying the execution
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/WorkUnitRange">AWS
   * API Reference</a></p>
   */
  class WorkUnitRange
  {
  public:
    AWS_LAKEFORMATION_API WorkUnitRange();
    AWS_LAKEFORMATION_API WorkUnitRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API WorkUnitRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines the maximum work unit ID in the range. The maximum value is
     * inclusive.</p>
     */
    inline long long GetWorkUnitIdMax() const{ return m_workUnitIdMax; }

    /**
     * <p>Defines the maximum work unit ID in the range. The maximum value is
     * inclusive.</p>
     */
    inline bool WorkUnitIdMaxHasBeenSet() const { return m_workUnitIdMaxHasBeenSet; }

    /**
     * <p>Defines the maximum work unit ID in the range. The maximum value is
     * inclusive.</p>
     */
    inline void SetWorkUnitIdMax(long long value) { m_workUnitIdMaxHasBeenSet = true; m_workUnitIdMax = value; }

    /**
     * <p>Defines the maximum work unit ID in the range. The maximum value is
     * inclusive.</p>
     */
    inline WorkUnitRange& WithWorkUnitIdMax(long long value) { SetWorkUnitIdMax(value); return *this;}


    /**
     * <p>Defines the minimum work unit ID in the range.</p>
     */
    inline long long GetWorkUnitIdMin() const{ return m_workUnitIdMin; }

    /**
     * <p>Defines the minimum work unit ID in the range.</p>
     */
    inline bool WorkUnitIdMinHasBeenSet() const { return m_workUnitIdMinHasBeenSet; }

    /**
     * <p>Defines the minimum work unit ID in the range.</p>
     */
    inline void SetWorkUnitIdMin(long long value) { m_workUnitIdMinHasBeenSet = true; m_workUnitIdMin = value; }

    /**
     * <p>Defines the minimum work unit ID in the range.</p>
     */
    inline WorkUnitRange& WithWorkUnitIdMin(long long value) { SetWorkUnitIdMin(value); return *this;}


    /**
     * <p>A work token used to query the execution service.</p>
     */
    inline const Aws::String& GetWorkUnitToken() const{ return m_workUnitToken; }

    /**
     * <p>A work token used to query the execution service.</p>
     */
    inline bool WorkUnitTokenHasBeenSet() const { return m_workUnitTokenHasBeenSet; }

    /**
     * <p>A work token used to query the execution service.</p>
     */
    inline void SetWorkUnitToken(const Aws::String& value) { m_workUnitTokenHasBeenSet = true; m_workUnitToken = value; }

    /**
     * <p>A work token used to query the execution service.</p>
     */
    inline void SetWorkUnitToken(Aws::String&& value) { m_workUnitTokenHasBeenSet = true; m_workUnitToken = std::move(value); }

    /**
     * <p>A work token used to query the execution service.</p>
     */
    inline void SetWorkUnitToken(const char* value) { m_workUnitTokenHasBeenSet = true; m_workUnitToken.assign(value); }

    /**
     * <p>A work token used to query the execution service.</p>
     */
    inline WorkUnitRange& WithWorkUnitToken(const Aws::String& value) { SetWorkUnitToken(value); return *this;}

    /**
     * <p>A work token used to query the execution service.</p>
     */
    inline WorkUnitRange& WithWorkUnitToken(Aws::String&& value) { SetWorkUnitToken(std::move(value)); return *this;}

    /**
     * <p>A work token used to query the execution service.</p>
     */
    inline WorkUnitRange& WithWorkUnitToken(const char* value) { SetWorkUnitToken(value); return *this;}

  private:

    long long m_workUnitIdMax;
    bool m_workUnitIdMaxHasBeenSet = false;

    long long m_workUnitIdMin;
    bool m_workUnitIdMinHasBeenSet = false;

    Aws::String m_workUnitToken;
    bool m_workUnitTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securitylake/model/Failures.h>
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
namespace SecurityLake
{
namespace Model
{

  /**
   * <p>Response element for actions which make changes namely create, update, or
   * delete actions. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/FailuresResponse">AWS
   * API Reference</a></p>
   */
  class FailuresResponse
  {
  public:
    AWS_SECURITYLAKE_API FailuresResponse();
    AWS_SECURITYLAKE_API FailuresResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API FailuresResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>List of all failures. </p>
     */
    inline const Aws::Vector<Failures>& GetFailures() const{ return m_failures; }

    /**
     * <p>List of all failures. </p>
     */
    inline bool FailuresHasBeenSet() const { return m_failuresHasBeenSet; }

    /**
     * <p>List of all failures. </p>
     */
    inline void SetFailures(const Aws::Vector<Failures>& value) { m_failuresHasBeenSet = true; m_failures = value; }

    /**
     * <p>List of all failures. </p>
     */
    inline void SetFailures(Aws::Vector<Failures>&& value) { m_failuresHasBeenSet = true; m_failures = std::move(value); }

    /**
     * <p>List of all failures. </p>
     */
    inline FailuresResponse& WithFailures(const Aws::Vector<Failures>& value) { SetFailures(value); return *this;}

    /**
     * <p>List of all failures. </p>
     */
    inline FailuresResponse& WithFailures(Aws::Vector<Failures>&& value) { SetFailures(std::move(value)); return *this;}

    /**
     * <p>List of all failures. </p>
     */
    inline FailuresResponse& AddFailures(const Failures& value) { m_failuresHasBeenSet = true; m_failures.push_back(value); return *this; }

    /**
     * <p>List of all failures. </p>
     */
    inline FailuresResponse& AddFailures(Failures&& value) { m_failuresHasBeenSet = true; m_failures.push_back(std::move(value)); return *this; }


    /**
     * <p>List of Regions where the failure occurred. </p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>List of Regions where the failure occurred. </p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>List of Regions where the failure occurred. </p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>List of Regions where the failure occurred. </p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>List of Regions where the failure occurred. </p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>List of Regions where the failure occurred. </p>
     */
    inline FailuresResponse& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>List of Regions where the failure occurred. </p>
     */
    inline FailuresResponse& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>List of Regions where the failure occurred. </p>
     */
    inline FailuresResponse& WithRegion(const char* value) { SetRegion(value); return *this;}

  private:

    Aws::Vector<Failures> m_failures;
    bool m_failuresHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws

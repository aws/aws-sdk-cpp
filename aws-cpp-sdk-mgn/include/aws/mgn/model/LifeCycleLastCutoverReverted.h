﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>Lifecycle last Cutover reverted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/LifeCycleLastCutoverReverted">AWS
   * API Reference</a></p>
   */
  class AWS_MGN_API LifeCycleLastCutoverReverted
  {
  public:
    LifeCycleLastCutoverReverted();
    LifeCycleLastCutoverReverted(Aws::Utils::Json::JsonView jsonValue);
    LifeCycleLastCutoverReverted& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Lifecycle last Cutover reverted API call date time.</p>
     */
    inline const Aws::String& GetApiCallDateTime() const{ return m_apiCallDateTime; }

    /**
     * <p>Lifecycle last Cutover reverted API call date time.</p>
     */
    inline bool ApiCallDateTimeHasBeenSet() const { return m_apiCallDateTimeHasBeenSet; }

    /**
     * <p>Lifecycle last Cutover reverted API call date time.</p>
     */
    inline void SetApiCallDateTime(const Aws::String& value) { m_apiCallDateTimeHasBeenSet = true; m_apiCallDateTime = value; }

    /**
     * <p>Lifecycle last Cutover reverted API call date time.</p>
     */
    inline void SetApiCallDateTime(Aws::String&& value) { m_apiCallDateTimeHasBeenSet = true; m_apiCallDateTime = std::move(value); }

    /**
     * <p>Lifecycle last Cutover reverted API call date time.</p>
     */
    inline void SetApiCallDateTime(const char* value) { m_apiCallDateTimeHasBeenSet = true; m_apiCallDateTime.assign(value); }

    /**
     * <p>Lifecycle last Cutover reverted API call date time.</p>
     */
    inline LifeCycleLastCutoverReverted& WithApiCallDateTime(const Aws::String& value) { SetApiCallDateTime(value); return *this;}

    /**
     * <p>Lifecycle last Cutover reverted API call date time.</p>
     */
    inline LifeCycleLastCutoverReverted& WithApiCallDateTime(Aws::String&& value) { SetApiCallDateTime(std::move(value)); return *this;}

    /**
     * <p>Lifecycle last Cutover reverted API call date time.</p>
     */
    inline LifeCycleLastCutoverReverted& WithApiCallDateTime(const char* value) { SetApiCallDateTime(value); return *this;}

  private:

    Aws::String m_apiCallDateTime;
    bool m_apiCallDateTimeHasBeenSet;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws

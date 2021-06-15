/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>

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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>The flag that enables the matching process of duplicate
   * profiles.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/MatchingRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CUSTOMERPROFILES_API MatchingRequest
  {
  public:
    MatchingRequest();
    MatchingRequest(Aws::Utils::Json::JsonView jsonValue);
    MatchingRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The flag that enables the matching process of duplicate profiles.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>The flag that enables the matching process of duplicate profiles.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>The flag that enables the matching process of duplicate profiles.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>The flag that enables the matching process of duplicate profiles.</p>
     */
    inline MatchingRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws

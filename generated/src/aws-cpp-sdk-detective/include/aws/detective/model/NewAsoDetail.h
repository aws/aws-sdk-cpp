/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
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
namespace Detective
{
namespace Model
{

  /**
   * <p>Details new Autonomous System Organizations (ASOs) used either at the
   * resource or account level. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/NewAsoDetail">AWS
   * API Reference</a></p>
   */
  class NewAsoDetail
  {
  public:
    AWS_DETECTIVE_API NewAsoDetail();
    AWS_DETECTIVE_API NewAsoDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API NewAsoDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details about the new Autonomous System Organization (ASO).</p>
     */
    inline const Aws::String& GetAso() const{ return m_aso; }

    /**
     * <p>Details about the new Autonomous System Organization (ASO).</p>
     */
    inline bool AsoHasBeenSet() const { return m_asoHasBeenSet; }

    /**
     * <p>Details about the new Autonomous System Organization (ASO).</p>
     */
    inline void SetAso(const Aws::String& value) { m_asoHasBeenSet = true; m_aso = value; }

    /**
     * <p>Details about the new Autonomous System Organization (ASO).</p>
     */
    inline void SetAso(Aws::String&& value) { m_asoHasBeenSet = true; m_aso = std::move(value); }

    /**
     * <p>Details about the new Autonomous System Organization (ASO).</p>
     */
    inline void SetAso(const char* value) { m_asoHasBeenSet = true; m_aso.assign(value); }

    /**
     * <p>Details about the new Autonomous System Organization (ASO).</p>
     */
    inline NewAsoDetail& WithAso(const Aws::String& value) { SetAso(value); return *this;}

    /**
     * <p>Details about the new Autonomous System Organization (ASO).</p>
     */
    inline NewAsoDetail& WithAso(Aws::String&& value) { SetAso(std::move(value)); return *this;}

    /**
     * <p>Details about the new Autonomous System Organization (ASO).</p>
     */
    inline NewAsoDetail& WithAso(const char* value) { SetAso(value); return *this;}


    /**
     * <p>Checks if the Autonomous System Organization (ASO) is new for the entire
     * account.</p>
     */
    inline bool GetIsNewForEntireAccount() const{ return m_isNewForEntireAccount; }

    /**
     * <p>Checks if the Autonomous System Organization (ASO) is new for the entire
     * account.</p>
     */
    inline bool IsNewForEntireAccountHasBeenSet() const { return m_isNewForEntireAccountHasBeenSet; }

    /**
     * <p>Checks if the Autonomous System Organization (ASO) is new for the entire
     * account.</p>
     */
    inline void SetIsNewForEntireAccount(bool value) { m_isNewForEntireAccountHasBeenSet = true; m_isNewForEntireAccount = value; }

    /**
     * <p>Checks if the Autonomous System Organization (ASO) is new for the entire
     * account.</p>
     */
    inline NewAsoDetail& WithIsNewForEntireAccount(bool value) { SetIsNewForEntireAccount(value); return *this;}

  private:

    Aws::String m_aso;
    bool m_asoHasBeenSet = false;

    bool m_isNewForEntireAccount;
    bool m_isNewForEntireAccountHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws

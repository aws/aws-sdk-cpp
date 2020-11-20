/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/Identity.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>The identity and metadata of an administrator.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/AppInstanceAdminSummary">AWS
   * API Reference</a></p>
   */
  class AWS_CHIME_API AppInstanceAdminSummary
  {
  public:
    AppInstanceAdminSummary();
    AppInstanceAdminSummary(Aws::Utils::Json::JsonView jsonValue);
    AppInstanceAdminSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name and metadata of the app instance administrator.</p>
     */
    inline const Identity& GetAdmin() const{ return m_admin; }

    /**
     * <p>The name and metadata of the app instance administrator.</p>
     */
    inline bool AdminHasBeenSet() const { return m_adminHasBeenSet; }

    /**
     * <p>The name and metadata of the app instance administrator.</p>
     */
    inline void SetAdmin(const Identity& value) { m_adminHasBeenSet = true; m_admin = value; }

    /**
     * <p>The name and metadata of the app instance administrator.</p>
     */
    inline void SetAdmin(Identity&& value) { m_adminHasBeenSet = true; m_admin = std::move(value); }

    /**
     * <p>The name and metadata of the app instance administrator.</p>
     */
    inline AppInstanceAdminSummary& WithAdmin(const Identity& value) { SetAdmin(value); return *this;}

    /**
     * <p>The name and metadata of the app instance administrator.</p>
     */
    inline AppInstanceAdminSummary& WithAdmin(Identity&& value) { SetAdmin(std::move(value)); return *this;}

  private:

    Identity m_admin;
    bool m_adminHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws

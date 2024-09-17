/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace CodeCatalyst
{
namespace Model
{

  /**
   * <p>Information about a specified personal access token (PAT).</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/AccessTokenSummary">AWS
   * API Reference</a></p>
   */
  class AccessTokenSummary
  {
  public:
    AWS_CODECATALYST_API AccessTokenSummary();
    AWS_CODECATALYST_API AccessTokenSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API AccessTokenSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The system-generated ID of the personal access token.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline AccessTokenSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline AccessTokenSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline AccessTokenSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name of the personal access token.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AccessTokenSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AccessTokenSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AccessTokenSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the personal access token will expire, in coordinated
     * universal time (UTC) timestamp format as specified in <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiresTime() const{ return m_expiresTime; }
    inline bool ExpiresTimeHasBeenSet() const { return m_expiresTimeHasBeenSet; }
    inline void SetExpiresTime(const Aws::Utils::DateTime& value) { m_expiresTimeHasBeenSet = true; m_expiresTime = value; }
    inline void SetExpiresTime(Aws::Utils::DateTime&& value) { m_expiresTimeHasBeenSet = true; m_expiresTime = std::move(value); }
    inline AccessTokenSummary& WithExpiresTime(const Aws::Utils::DateTime& value) { SetExpiresTime(value); return *this;}
    inline AccessTokenSummary& WithExpiresTime(Aws::Utils::DateTime&& value) { SetExpiresTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_expiresTime;
    bool m_expiresTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws

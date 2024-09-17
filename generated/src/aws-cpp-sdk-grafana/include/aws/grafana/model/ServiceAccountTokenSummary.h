/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace ManagedGrafana
{
namespace Model
{

  /**
   * <p>A structure that contains the information about a service account
   * token.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/ServiceAccountTokenSummary">AWS
   * API Reference</a></p>
   */
  class ServiceAccountTokenSummary
  {
  public:
    AWS_MANAGEDGRAFANA_API ServiceAccountTokenSummary();
    AWS_MANAGEDGRAFANA_API ServiceAccountTokenSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDGRAFANA_API ServiceAccountTokenSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDGRAFANA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>When the service account token was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ServiceAccountTokenSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ServiceAccountTokenSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the service account token will expire.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiresAt() const{ return m_expiresAt; }
    inline bool ExpiresAtHasBeenSet() const { return m_expiresAtHasBeenSet; }
    inline void SetExpiresAt(const Aws::Utils::DateTime& value) { m_expiresAtHasBeenSet = true; m_expiresAt = value; }
    inline void SetExpiresAt(Aws::Utils::DateTime&& value) { m_expiresAtHasBeenSet = true; m_expiresAt = std::move(value); }
    inline ServiceAccountTokenSummary& WithExpiresAt(const Aws::Utils::DateTime& value) { SetExpiresAt(value); return *this;}
    inline ServiceAccountTokenSummary& WithExpiresAt(Aws::Utils::DateTime&& value) { SetExpiresAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the service account token.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ServiceAccountTokenSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ServiceAccountTokenSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ServiceAccountTokenSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the token was used to authorize a Grafana HTTP API.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUsedAt() const{ return m_lastUsedAt; }
    inline bool LastUsedAtHasBeenSet() const { return m_lastUsedAtHasBeenSet; }
    inline void SetLastUsedAt(const Aws::Utils::DateTime& value) { m_lastUsedAtHasBeenSet = true; m_lastUsedAt = value; }
    inline void SetLastUsedAt(Aws::Utils::DateTime&& value) { m_lastUsedAtHasBeenSet = true; m_lastUsedAt = std::move(value); }
    inline ServiceAccountTokenSummary& WithLastUsedAt(const Aws::Utils::DateTime& value) { SetLastUsedAt(value); return *this;}
    inline ServiceAccountTokenSummary& WithLastUsedAt(Aws::Utils::DateTime&& value) { SetLastUsedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service account token.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ServiceAccountTokenSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ServiceAccountTokenSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ServiceAccountTokenSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_expiresAt;
    bool m_expiresAtHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastUsedAt;
    bool m_lastUsedAtHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws

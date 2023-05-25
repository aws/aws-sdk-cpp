/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/grafana/model/UserType.h>
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
   * <p>A structure that specifies one user or group in the workspace.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/User">AWS API
   * Reference</a></p>
   */
  class User
  {
  public:
    AWS_MANAGEDGRAFANA_API User();
    AWS_MANAGEDGRAFANA_API User(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDGRAFANA_API User& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDGRAFANA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the user or group.</p> <p>Pattern:
     * <code>^([0-9a-fA-F]{10}-|)[A-Fa-f0-9]{8}-[A-Fa-f0-9]{4}-[A-Fa-f0-9]{4}-[A-Fa-f0-9]{4}-[A-Fa-f0-9]{12}$</code>
     * </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the user or group.</p> <p>Pattern:
     * <code>^([0-9a-fA-F]{10}-|)[A-Fa-f0-9]{8}-[A-Fa-f0-9]{4}-[A-Fa-f0-9]{4}-[A-Fa-f0-9]{4}-[A-Fa-f0-9]{12}$</code>
     * </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the user or group.</p> <p>Pattern:
     * <code>^([0-9a-fA-F]{10}-|)[A-Fa-f0-9]{8}-[A-Fa-f0-9]{4}-[A-Fa-f0-9]{4}-[A-Fa-f0-9]{4}-[A-Fa-f0-9]{12}$</code>
     * </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the user or group.</p> <p>Pattern:
     * <code>^([0-9a-fA-F]{10}-|)[A-Fa-f0-9]{8}-[A-Fa-f0-9]{4}-[A-Fa-f0-9]{4}-[A-Fa-f0-9]{4}-[A-Fa-f0-9]{12}$</code>
     * </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the user or group.</p> <p>Pattern:
     * <code>^([0-9a-fA-F]{10}-|)[A-Fa-f0-9]{8}-[A-Fa-f0-9]{4}-[A-Fa-f0-9]{4}-[A-Fa-f0-9]{4}-[A-Fa-f0-9]{12}$</code>
     * </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the user or group.</p> <p>Pattern:
     * <code>^([0-9a-fA-F]{10}-|)[A-Fa-f0-9]{8}-[A-Fa-f0-9]{4}-[A-Fa-f0-9]{4}-[A-Fa-f0-9]{4}-[A-Fa-f0-9]{12}$</code>
     * </p>
     */
    inline User& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the user or group.</p> <p>Pattern:
     * <code>^([0-9a-fA-F]{10}-|)[A-Fa-f0-9]{8}-[A-Fa-f0-9]{4}-[A-Fa-f0-9]{4}-[A-Fa-f0-9]{4}-[A-Fa-f0-9]{12}$</code>
     * </p>
     */
    inline User& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the user or group.</p> <p>Pattern:
     * <code>^([0-9a-fA-F]{10}-|)[A-Fa-f0-9]{8}-[A-Fa-f0-9]{4}-[A-Fa-f0-9]{4}-[A-Fa-f0-9]{4}-[A-Fa-f0-9]{12}$</code>
     * </p>
     */
    inline User& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Specifies whether this is a single user or a group.</p>
     */
    inline const UserType& GetType() const{ return m_type; }

    /**
     * <p>Specifies whether this is a single user or a group.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Specifies whether this is a single user or a group.</p>
     */
    inline void SetType(const UserType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Specifies whether this is a single user or a group.</p>
     */
    inline void SetType(UserType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Specifies whether this is a single user or a group.</p>
     */
    inline User& WithType(const UserType& value) { SetType(value); return *this;}

    /**
     * <p>Specifies whether this is a single user or a group.</p>
     */
    inline User& WithType(UserType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    UserType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws

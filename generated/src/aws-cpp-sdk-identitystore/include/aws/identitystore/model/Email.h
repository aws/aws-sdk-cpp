/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/identitystore/IdentityStore_EXPORTS.h>
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
namespace IdentityStore
{
namespace Model
{

  /**
   * <p>The email address associated with the user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/Email">AWS
   * API Reference</a></p>
   */
  class Email
  {
  public:
    AWS_IDENTITYSTORE_API Email();
    AWS_IDENTITYSTORE_API Email(Aws::Utils::Json::JsonView jsonValue);
    AWS_IDENTITYSTORE_API Email& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IDENTITYSTORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A string containing an email address. For example, "johndoe@amazon.com."</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>A string containing an email address. For example, "johndoe@amazon.com."</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>A string containing an email address. For example, "johndoe@amazon.com."</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>A string containing an email address. For example, "johndoe@amazon.com."</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>A string containing an email address. For example, "johndoe@amazon.com."</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>A string containing an email address. For example, "johndoe@amazon.com."</p>
     */
    inline Email& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>A string containing an email address. For example, "johndoe@amazon.com."</p>
     */
    inline Email& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>A string containing an email address. For example, "johndoe@amazon.com."</p>
     */
    inline Email& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>A string representing the type of address. For example, "Work."</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>A string representing the type of address. For example, "Work."</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>A string representing the type of address. For example, "Work."</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>A string representing the type of address. For example, "Work."</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>A string representing the type of address. For example, "Work."</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>A string representing the type of address. For example, "Work."</p>
     */
    inline Email& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>A string representing the type of address. For example, "Work."</p>
     */
    inline Email& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>A string representing the type of address. For example, "Work."</p>
     */
    inline Email& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>A Boolean value representing whether this is the primary email address for
     * the associated resource.</p>
     */
    inline bool GetPrimary() const{ return m_primary; }

    /**
     * <p>A Boolean value representing whether this is the primary email address for
     * the associated resource.</p>
     */
    inline bool PrimaryHasBeenSet() const { return m_primaryHasBeenSet; }

    /**
     * <p>A Boolean value representing whether this is the primary email address for
     * the associated resource.</p>
     */
    inline void SetPrimary(bool value) { m_primaryHasBeenSet = true; m_primary = value; }

    /**
     * <p>A Boolean value representing whether this is the primary email address for
     * the associated resource.</p>
     */
    inline Email& WithPrimary(bool value) { SetPrimary(value); return *this;}

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    bool m_primary;
    bool m_primaryHasBeenSet = false;
  };

} // namespace Model
} // namespace IdentityStore
} // namespace Aws

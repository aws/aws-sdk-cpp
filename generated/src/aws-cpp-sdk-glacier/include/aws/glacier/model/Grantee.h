/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/glacier/model/Type.h>
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
namespace Glacier
{
namespace Model
{

  /**
   * <p>Contains information about the grantee.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/Grantee">AWS API
   * Reference</a></p>
   */
  class Grantee
  {
  public:
    AWS_GLACIER_API Grantee();
    AWS_GLACIER_API Grantee(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API Grantee& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Type of grantee</p>
     */
    inline const Type& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Type& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Type&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Grantee& WithType(const Type& value) { SetType(value); return *this;}
    inline Grantee& WithType(Type&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Screen name of the grantee.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline Grantee& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline Grantee& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline Grantee& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>URI of the grantee group.</p>
     */
    inline const Aws::String& GetURI() const{ return m_uRI; }
    inline bool URIHasBeenSet() const { return m_uRIHasBeenSet; }
    inline void SetURI(const Aws::String& value) { m_uRIHasBeenSet = true; m_uRI = value; }
    inline void SetURI(Aws::String&& value) { m_uRIHasBeenSet = true; m_uRI = std::move(value); }
    inline void SetURI(const char* value) { m_uRIHasBeenSet = true; m_uRI.assign(value); }
    inline Grantee& WithURI(const Aws::String& value) { SetURI(value); return *this;}
    inline Grantee& WithURI(Aws::String&& value) { SetURI(std::move(value)); return *this;}
    inline Grantee& WithURI(const char* value) { SetURI(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The canonical user ID of the grantee.</p>
     */
    inline const Aws::String& GetID() const{ return m_iD; }
    inline bool IDHasBeenSet() const { return m_iDHasBeenSet; }
    inline void SetID(const Aws::String& value) { m_iDHasBeenSet = true; m_iD = value; }
    inline void SetID(Aws::String&& value) { m_iDHasBeenSet = true; m_iD = std::move(value); }
    inline void SetID(const char* value) { m_iDHasBeenSet = true; m_iD.assign(value); }
    inline Grantee& WithID(const Aws::String& value) { SetID(value); return *this;}
    inline Grantee& WithID(Aws::String&& value) { SetID(std::move(value)); return *this;}
    inline Grantee& WithID(const char* value) { SetID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Email address of the grantee.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }
    inline Grantee& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}
    inline Grantee& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}
    inline Grantee& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}
    ///@}
  private:

    Type m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_uRI;
    bool m_uRIHasBeenSet = false;

    Aws::String m_iD;
    bool m_iDHasBeenSet = false;

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws

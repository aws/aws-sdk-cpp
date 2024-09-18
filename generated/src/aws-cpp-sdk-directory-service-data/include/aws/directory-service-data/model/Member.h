/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directory-service-data/DirectoryServiceData_EXPORTS.h>
#include <aws/directory-service-data/model/MemberType.h>
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
namespace DirectoryServiceData
{
namespace Model
{

  /**
   * <p>A member object that contains identifying information for a specified
   * member.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directory-service-data-2023-05-31/Member">AWS
   * API Reference</a></p>
   */
  class Member
  {
  public:
    AWS_DIRECTORYSERVICEDATA_API Member();
    AWS_DIRECTORYSERVICEDATA_API Member(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICEDATA_API Member& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The AD type of the member object.</p>
     */
    inline const MemberType& GetMemberType() const{ return m_memberType; }
    inline bool MemberTypeHasBeenSet() const { return m_memberTypeHasBeenSet; }
    inline void SetMemberType(const MemberType& value) { m_memberTypeHasBeenSet = true; m_memberType = value; }
    inline void SetMemberType(MemberType&& value) { m_memberTypeHasBeenSet = true; m_memberType = std::move(value); }
    inline Member& WithMemberType(const MemberType& value) { SetMemberType(value); return *this;}
    inline Member& WithMemberType(MemberType&& value) { SetMemberType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the group member. </p>
     */
    inline const Aws::String& GetSAMAccountName() const{ return m_sAMAccountName; }
    inline bool SAMAccountNameHasBeenSet() const { return m_sAMAccountNameHasBeenSet; }
    inline void SetSAMAccountName(const Aws::String& value) { m_sAMAccountNameHasBeenSet = true; m_sAMAccountName = value; }
    inline void SetSAMAccountName(Aws::String&& value) { m_sAMAccountNameHasBeenSet = true; m_sAMAccountName = std::move(value); }
    inline void SetSAMAccountName(const char* value) { m_sAMAccountNameHasBeenSet = true; m_sAMAccountName.assign(value); }
    inline Member& WithSAMAccountName(const Aws::String& value) { SetSAMAccountName(value); return *this;}
    inline Member& WithSAMAccountName(Aws::String&& value) { SetSAMAccountName(std::move(value)); return *this;}
    inline Member& WithSAMAccountName(const char* value) { SetSAMAccountName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique security identifier (SID) of the group member. </p>
     */
    inline const Aws::String& GetSID() const{ return m_sID; }
    inline bool SIDHasBeenSet() const { return m_sIDHasBeenSet; }
    inline void SetSID(const Aws::String& value) { m_sIDHasBeenSet = true; m_sID = value; }
    inline void SetSID(Aws::String&& value) { m_sIDHasBeenSet = true; m_sID = std::move(value); }
    inline void SetSID(const char* value) { m_sIDHasBeenSet = true; m_sID.assign(value); }
    inline Member& WithSID(const Aws::String& value) { SetSID(value); return *this;}
    inline Member& WithSID(Aws::String&& value) { SetSID(std::move(value)); return *this;}
    inline Member& WithSID(const char* value) { SetSID(value); return *this;}
    ///@}
  private:

    MemberType m_memberType;
    bool m_memberTypeHasBeenSet = false;

    Aws::String m_sAMAccountName;
    bool m_sAMAccountNameHasBeenSet = false;

    Aws::String m_sID;
    bool m_sIDHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryServiceData
} // namespace Aws

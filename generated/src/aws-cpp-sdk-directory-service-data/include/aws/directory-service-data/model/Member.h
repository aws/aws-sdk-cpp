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
    AWS_DIRECTORYSERVICEDATA_API Member() = default;
    AWS_DIRECTORYSERVICEDATA_API Member(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICEDATA_API Member& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The AD type of the member object.</p>
     */
    inline MemberType GetMemberType() const { return m_memberType; }
    inline bool MemberTypeHasBeenSet() const { return m_memberTypeHasBeenSet; }
    inline void SetMemberType(MemberType value) { m_memberTypeHasBeenSet = true; m_memberType = value; }
    inline Member& WithMemberType(MemberType value) { SetMemberType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the group member. </p>
     */
    inline const Aws::String& GetSAMAccountName() const { return m_sAMAccountName; }
    inline bool SAMAccountNameHasBeenSet() const { return m_sAMAccountNameHasBeenSet; }
    template<typename SAMAccountNameT = Aws::String>
    void SetSAMAccountName(SAMAccountNameT&& value) { m_sAMAccountNameHasBeenSet = true; m_sAMAccountName = std::forward<SAMAccountNameT>(value); }
    template<typename SAMAccountNameT = Aws::String>
    Member& WithSAMAccountName(SAMAccountNameT&& value) { SetSAMAccountName(std::forward<SAMAccountNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique security identifier (SID) of the group member. </p>
     */
    inline const Aws::String& GetSID() const { return m_sID; }
    inline bool SIDHasBeenSet() const { return m_sIDHasBeenSet; }
    template<typename SIDT = Aws::String>
    void SetSID(SIDT&& value) { m_sIDHasBeenSet = true; m_sID = std::forward<SIDT>(value); }
    template<typename SIDT = Aws::String>
    Member& WithSID(SIDT&& value) { SetSID(std::forward<SIDT>(value)); return *this;}
    ///@}
  private:

    MemberType m_memberType{MemberType::NOT_SET};
    bool m_memberTypeHasBeenSet = false;

    Aws::String m_sAMAccountName;
    bool m_sAMAccountNameHasBeenSet = false;

    Aws::String m_sID;
    bool m_sIDHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryServiceData
} // namespace Aws

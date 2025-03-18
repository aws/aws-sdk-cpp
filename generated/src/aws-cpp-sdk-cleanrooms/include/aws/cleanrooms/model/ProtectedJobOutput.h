/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ProtectedJobS3Output.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/ProtectedJobSingleMemberOutput.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>Contains details about the protected job output.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ProtectedJobOutput">AWS
   * API Reference</a></p>
   */
  class ProtectedJobOutput
  {
  public:
    AWS_CLEANROOMS_API ProtectedJobOutput();
    AWS_CLEANROOMS_API ProtectedJobOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ProtectedJobOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If present, the output for a protected job with an `S3` output type.</p>
     */
    inline const ProtectedJobS3Output& GetS3() const{ return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    inline void SetS3(const ProtectedJobS3Output& value) { m_s3HasBeenSet = true; m_s3 = value; }
    inline void SetS3(ProtectedJobS3Output&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }
    inline ProtectedJobOutput& WithS3(const ProtectedJobS3Output& value) { SetS3(value); return *this;}
    inline ProtectedJobOutput& WithS3(ProtectedJobS3Output&& value) { SetS3(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of member Amazon Web Services account(s) that received the results
     * of the job. </p>
     */
    inline const Aws::Vector<ProtectedJobSingleMemberOutput>& GetMemberList() const{ return m_memberList; }
    inline bool MemberListHasBeenSet() const { return m_memberListHasBeenSet; }
    inline void SetMemberList(const Aws::Vector<ProtectedJobSingleMemberOutput>& value) { m_memberListHasBeenSet = true; m_memberList = value; }
    inline void SetMemberList(Aws::Vector<ProtectedJobSingleMemberOutput>&& value) { m_memberListHasBeenSet = true; m_memberList = std::move(value); }
    inline ProtectedJobOutput& WithMemberList(const Aws::Vector<ProtectedJobSingleMemberOutput>& value) { SetMemberList(value); return *this;}
    inline ProtectedJobOutput& WithMemberList(Aws::Vector<ProtectedJobSingleMemberOutput>&& value) { SetMemberList(std::move(value)); return *this;}
    inline ProtectedJobOutput& AddMemberList(const ProtectedJobSingleMemberOutput& value) { m_memberListHasBeenSet = true; m_memberList.push_back(value); return *this; }
    inline ProtectedJobOutput& AddMemberList(ProtectedJobSingleMemberOutput&& value) { m_memberListHasBeenSet = true; m_memberList.push_back(std::move(value)); return *this; }
    ///@}
  private:

    ProtectedJobS3Output m_s3;
    bool m_s3HasBeenSet = false;

    Aws::Vector<ProtectedJobSingleMemberOutput> m_memberList;
    bool m_memberListHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ProtectedQueryS3Output.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/ProtectedQuerySingleMemberOutput.h>
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
   * <p>Contains details about the protected query output.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ProtectedQueryOutput">AWS
   * API Reference</a></p>
   */
  class ProtectedQueryOutput
  {
  public:
    AWS_CLEANROOMS_API ProtectedQueryOutput();
    AWS_CLEANROOMS_API ProtectedQueryOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ProtectedQueryOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>If present, the output for a protected query with an `S3` output type.</p>
     */
    inline const ProtectedQueryS3Output& GetS3() const{ return m_s3; }

    /**
     * <p>If present, the output for a protected query with an `S3` output type.</p>
     */
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }

    /**
     * <p>If present, the output for a protected query with an `S3` output type.</p>
     */
    inline void SetS3(const ProtectedQueryS3Output& value) { m_s3HasBeenSet = true; m_s3 = value; }

    /**
     * <p>If present, the output for a protected query with an `S3` output type.</p>
     */
    inline void SetS3(ProtectedQueryS3Output&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }

    /**
     * <p>If present, the output for a protected query with an `S3` output type.</p>
     */
    inline ProtectedQueryOutput& WithS3(const ProtectedQueryS3Output& value) { SetS3(value); return *this;}

    /**
     * <p>If present, the output for a protected query with an `S3` output type.</p>
     */
    inline ProtectedQueryOutput& WithS3(ProtectedQueryS3Output&& value) { SetS3(std::move(value)); return *this;}


    /**
     * <p>The list of member Amazon Web Services account(s) that received the results
     * of the query. </p>
     */
    inline const Aws::Vector<ProtectedQuerySingleMemberOutput>& GetMemberList() const{ return m_memberList; }

    /**
     * <p>The list of member Amazon Web Services account(s) that received the results
     * of the query. </p>
     */
    inline bool MemberListHasBeenSet() const { return m_memberListHasBeenSet; }

    /**
     * <p>The list of member Amazon Web Services account(s) that received the results
     * of the query. </p>
     */
    inline void SetMemberList(const Aws::Vector<ProtectedQuerySingleMemberOutput>& value) { m_memberListHasBeenSet = true; m_memberList = value; }

    /**
     * <p>The list of member Amazon Web Services account(s) that received the results
     * of the query. </p>
     */
    inline void SetMemberList(Aws::Vector<ProtectedQuerySingleMemberOutput>&& value) { m_memberListHasBeenSet = true; m_memberList = std::move(value); }

    /**
     * <p>The list of member Amazon Web Services account(s) that received the results
     * of the query. </p>
     */
    inline ProtectedQueryOutput& WithMemberList(const Aws::Vector<ProtectedQuerySingleMemberOutput>& value) { SetMemberList(value); return *this;}

    /**
     * <p>The list of member Amazon Web Services account(s) that received the results
     * of the query. </p>
     */
    inline ProtectedQueryOutput& WithMemberList(Aws::Vector<ProtectedQuerySingleMemberOutput>&& value) { SetMemberList(std::move(value)); return *this;}

    /**
     * <p>The list of member Amazon Web Services account(s) that received the results
     * of the query. </p>
     */
    inline ProtectedQueryOutput& AddMemberList(const ProtectedQuerySingleMemberOutput& value) { m_memberListHasBeenSet = true; m_memberList.push_back(value); return *this; }

    /**
     * <p>The list of member Amazon Web Services account(s) that received the results
     * of the query. </p>
     */
    inline ProtectedQueryOutput& AddMemberList(ProtectedQuerySingleMemberOutput&& value) { m_memberListHasBeenSet = true; m_memberList.push_back(std::move(value)); return *this; }

  private:

    ProtectedQueryS3Output m_s3;
    bool m_s3HasBeenSet = false;

    Aws::Vector<ProtectedQuerySingleMemberOutput> m_memberList;
    bool m_memberListHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws

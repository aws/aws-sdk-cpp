/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/LFTagPair.h>
#include <aws/lakeformation/model/ErrorDetail.h>
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
namespace LakeFormation
{
namespace Model
{

  /**
   * <p>A structure containing an error related to a <code>TagResource</code> or
   * <code>UnTagResource</code> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/LFTagError">AWS
   * API Reference</a></p>
   */
  class LFTagError
  {
  public:
    AWS_LAKEFORMATION_API LFTagError();
    AWS_LAKEFORMATION_API LFTagError(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API LFTagError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key-name of the LF-tag.</p>
     */
    inline const LFTagPair& GetLFTag() const{ return m_lFTag; }

    /**
     * <p>The key-name of the LF-tag.</p>
     */
    inline bool LFTagHasBeenSet() const { return m_lFTagHasBeenSet; }

    /**
     * <p>The key-name of the LF-tag.</p>
     */
    inline void SetLFTag(const LFTagPair& value) { m_lFTagHasBeenSet = true; m_lFTag = value; }

    /**
     * <p>The key-name of the LF-tag.</p>
     */
    inline void SetLFTag(LFTagPair&& value) { m_lFTagHasBeenSet = true; m_lFTag = std::move(value); }

    /**
     * <p>The key-name of the LF-tag.</p>
     */
    inline LFTagError& WithLFTag(const LFTagPair& value) { SetLFTag(value); return *this;}

    /**
     * <p>The key-name of the LF-tag.</p>
     */
    inline LFTagError& WithLFTag(LFTagPair&& value) { SetLFTag(std::move(value)); return *this;}


    /**
     * <p>An error that occurred with the attachment or detachment of the LF-tag.</p>
     */
    inline const ErrorDetail& GetError() const{ return m_error; }

    /**
     * <p>An error that occurred with the attachment or detachment of the LF-tag.</p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>An error that occurred with the attachment or detachment of the LF-tag.</p>
     */
    inline void SetError(const ErrorDetail& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>An error that occurred with the attachment or detachment of the LF-tag.</p>
     */
    inline void SetError(ErrorDetail&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>An error that occurred with the attachment or detachment of the LF-tag.</p>
     */
    inline LFTagError& WithError(const ErrorDetail& value) { SetError(value); return *this;}

    /**
     * <p>An error that occurred with the attachment or detachment of the LF-tag.</p>
     */
    inline LFTagError& WithError(ErrorDetail&& value) { SetError(std::move(value)); return *this;}

  private:

    LFTagPair m_lFTag;
    bool m_lFTagHasBeenSet = false;

    ErrorDetail m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>Gives a detailed description of the result of an action. It's on each cost
   * allocation tag entry in the request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/UpdateCostAllocationTagsStatusError">AWS
   * API Reference</a></p>
   */
  class UpdateCostAllocationTagsStatusError
  {
  public:
    AWS_COSTEXPLORER_API UpdateCostAllocationTagsStatusError();
    AWS_COSTEXPLORER_API UpdateCostAllocationTagsStatusError(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API UpdateCostAllocationTagsStatusError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key for the cost allocation tag. </p>
     */
    inline const Aws::String& GetTagKey() const{ return m_tagKey; }
    inline bool TagKeyHasBeenSet() const { return m_tagKeyHasBeenSet; }
    inline void SetTagKey(const Aws::String& value) { m_tagKeyHasBeenSet = true; m_tagKey = value; }
    inline void SetTagKey(Aws::String&& value) { m_tagKeyHasBeenSet = true; m_tagKey = std::move(value); }
    inline void SetTagKey(const char* value) { m_tagKeyHasBeenSet = true; m_tagKey.assign(value); }
    inline UpdateCostAllocationTagsStatusError& WithTagKey(const Aws::String& value) { SetTagKey(value); return *this;}
    inline UpdateCostAllocationTagsStatusError& WithTagKey(Aws::String&& value) { SetTagKey(std::move(value)); return *this;}
    inline UpdateCostAllocationTagsStatusError& WithTagKey(const char* value) { SetTagKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error code representing why the action failed on this entry. </p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }
    inline UpdateCostAllocationTagsStatusError& WithCode(const Aws::String& value) { SetCode(value); return *this;}
    inline UpdateCostAllocationTagsStatusError& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}
    inline UpdateCostAllocationTagsStatusError& WithCode(const char* value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message explaining why the action failed on this entry. </p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline UpdateCostAllocationTagsStatusError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline UpdateCostAllocationTagsStatusError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline UpdateCostAllocationTagsStatusError& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_tagKey;
    bool m_tagKeyHasBeenSet = false;

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws

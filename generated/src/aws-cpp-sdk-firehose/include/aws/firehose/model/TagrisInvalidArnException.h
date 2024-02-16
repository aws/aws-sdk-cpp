/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/model/TagrisSweepListItem.h>
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
namespace Firehose
{
namespace Model
{

  class TagrisInvalidArnException
  {
  public:
    AWS_FIREHOSE_API TagrisInvalidArnException();
    AWS_FIREHOSE_API TagrisInvalidArnException(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API TagrisInvalidArnException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline TagrisInvalidArnException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline TagrisInvalidArnException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline TagrisInvalidArnException& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const TagrisSweepListItem& GetSweepListItem() const{ return m_sweepListItem; }

    
    inline bool SweepListItemHasBeenSet() const { return m_sweepListItemHasBeenSet; }

    
    inline void SetSweepListItem(const TagrisSweepListItem& value) { m_sweepListItemHasBeenSet = true; m_sweepListItem = value; }

    
    inline void SetSweepListItem(TagrisSweepListItem&& value) { m_sweepListItemHasBeenSet = true; m_sweepListItem = std::move(value); }

    
    inline TagrisInvalidArnException& WithSweepListItem(const TagrisSweepListItem& value) { SetSweepListItem(value); return *this;}

    
    inline TagrisInvalidArnException& WithSweepListItem(TagrisSweepListItem&& value) { SetSweepListItem(std::move(value)); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    TagrisSweepListItem m_sweepListItem;
    bool m_sweepListItemHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws

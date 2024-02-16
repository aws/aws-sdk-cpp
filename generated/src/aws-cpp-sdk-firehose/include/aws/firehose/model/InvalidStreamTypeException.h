/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
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
namespace Firehose
{
namespace Model
{

  class InvalidStreamTypeException
  {
  public:
    AWS_FIREHOSE_API InvalidStreamTypeException();
    AWS_FIREHOSE_API InvalidStreamTypeException(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API InvalidStreamTypeException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline InvalidStreamTypeException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline InvalidStreamTypeException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline InvalidStreamTypeException& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const Aws::String& GetSource() const{ return m_source; }

    
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    
    inline InvalidStreamTypeException& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    
    inline InvalidStreamTypeException& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    
    inline InvalidStreamTypeException& WithSource(const char* value) { SetSource(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws

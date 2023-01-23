/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
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
namespace Kafka
{
namespace Model
{

  /**
   * Public access control for brokers.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/PublicAccess">AWS
   * API Reference</a></p>
   */
  class PublicAccess
  {
  public:
    AWS_KAFKA_API PublicAccess();
    AWS_KAFKA_API PublicAccess(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API PublicAccess& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>The value DISABLED indicates that public access is turned off.
     * SERVICE_PROVIDED_EIPS indicates that public access is turned on.</p>
         
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * 
            <p>The value DISABLED indicates that public access is turned off.
     * SERVICE_PROVIDED_EIPS indicates that public access is turned on.</p>
         
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * 
            <p>The value DISABLED indicates that public access is turned off.
     * SERVICE_PROVIDED_EIPS indicates that public access is turned on.</p>
         
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * 
            <p>The value DISABLED indicates that public access is turned off.
     * SERVICE_PROVIDED_EIPS indicates that public access is turned on.</p>
         
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * 
            <p>The value DISABLED indicates that public access is turned off.
     * SERVICE_PROVIDED_EIPS indicates that public access is turned on.</p>
         
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * 
            <p>The value DISABLED indicates that public access is turned off.
     * SERVICE_PROVIDED_EIPS indicates that public access is turned on.</p>
         
     */
    inline PublicAccess& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * 
            <p>The value DISABLED indicates that public access is turned off.
     * SERVICE_PROVIDED_EIPS indicates that public access is turned on.</p>
         
     */
    inline PublicAccess& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * 
            <p>The value DISABLED indicates that public access is turned off.
     * SERVICE_PROVIDED_EIPS indicates that public access is turned on.</p>
         
     */
    inline PublicAccess& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws

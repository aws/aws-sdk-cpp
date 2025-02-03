/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
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
namespace RestJsonProtocol
{
namespace Model
{

  class RenamedGreeting
  {
  public:
    AWS_RESTJSONPROTOCOL_API RenamedGreeting();
    AWS_RESTJSONPROTOCOL_API RenamedGreeting(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESTJSONPROTOCOL_API RenamedGreeting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESTJSONPROTOCOL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetSalutation() const{ return m_salutation; }
    inline bool SalutationHasBeenSet() const { return m_salutationHasBeenSet; }
    inline void SetSalutation(const Aws::String& value) { m_salutationHasBeenSet = true; m_salutation = value; }
    inline void SetSalutation(Aws::String&& value) { m_salutationHasBeenSet = true; m_salutation = std::move(value); }
    inline void SetSalutation(const char* value) { m_salutationHasBeenSet = true; m_salutation.assign(value); }
    inline RenamedGreeting& WithSalutation(const Aws::String& value) { SetSalutation(value); return *this;}
    inline RenamedGreeting& WithSalutation(Aws::String&& value) { SetSalutation(std::move(value)); return *this;}
    inline RenamedGreeting& WithSalutation(const char* value) { SetSalutation(value); return *this;}
    ///@}
  private:

    Aws::String m_salutation;
    bool m_salutationHasBeenSet = false;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws

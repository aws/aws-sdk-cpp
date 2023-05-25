/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/ConnectCasesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

  /**
   */
  class CreateDomainRequest : public ConnectCasesRequest
  {
  public:
    AWS_CONNECTCASES_API CreateDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDomain"; }

    AWS_CONNECTCASES_API Aws::String SerializePayload() const override;


    /**
     * <p>The name for your Cases domain. It must be unique for your Amazon Web
     * Services account.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for your Cases domain. It must be unique for your Amazon Web
     * Services account.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for your Cases domain. It must be unique for your Amazon Web
     * Services account.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for your Cases domain. It must be unique for your Amazon Web
     * Services account.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for your Cases domain. It must be unique for your Amazon Web
     * Services account.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for your Cases domain. It must be unique for your Amazon Web
     * Services account.</p>
     */
    inline CreateDomainRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for your Cases domain. It must be unique for your Amazon Web
     * Services account.</p>
     */
    inline CreateDomainRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for your Cases domain. It must be unique for your Amazon Web
     * Services account.</p>
     */
    inline CreateDomainRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws

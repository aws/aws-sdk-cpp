/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
#include <aws/mwaa/MWAARequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MWAA
{
namespace Model
{

  /**
   */
  class AWS_MWAA_API CreateCliTokenRequest : public MWAARequest
  {
  public:
    CreateCliTokenRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCliToken"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Create a CLI token request for a MWAA environment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Create a CLI token request for a MWAA environment.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Create a CLI token request for a MWAA environment.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Create a CLI token request for a MWAA environment.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Create a CLI token request for a MWAA environment.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Create a CLI token request for a MWAA environment.</p>
     */
    inline CreateCliTokenRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Create a CLI token request for a MWAA environment.</p>
     */
    inline CreateCliTokenRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Create a CLI token request for a MWAA environment.</p>
     */
    inline CreateCliTokenRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws

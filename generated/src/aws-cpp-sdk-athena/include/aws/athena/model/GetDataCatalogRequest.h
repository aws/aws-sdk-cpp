/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/AthenaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Athena
{
namespace Model
{

  /**
   */
  class GetDataCatalogRequest : public AthenaRequest
  {
  public:
    AWS_ATHENA_API GetDataCatalogRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDataCatalog"; }

    AWS_ATHENA_API Aws::String SerializePayload() const override;

    AWS_ATHENA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the data catalog to return.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline GetDataCatalogRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetDataCatalogRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetDataCatalogRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workgroup. Required if making an IAM Identity Center
     * request.</p>
     */
    inline const Aws::String& GetWorkGroup() const{ return m_workGroup; }
    inline bool WorkGroupHasBeenSet() const { return m_workGroupHasBeenSet; }
    inline void SetWorkGroup(const Aws::String& value) { m_workGroupHasBeenSet = true; m_workGroup = value; }
    inline void SetWorkGroup(Aws::String&& value) { m_workGroupHasBeenSet = true; m_workGroup = std::move(value); }
    inline void SetWorkGroup(const char* value) { m_workGroupHasBeenSet = true; m_workGroup.assign(value); }
    inline GetDataCatalogRequest& WithWorkGroup(const Aws::String& value) { SetWorkGroup(value); return *this;}
    inline GetDataCatalogRequest& WithWorkGroup(Aws::String&& value) { SetWorkGroup(std::move(value)); return *this;}
    inline GetDataCatalogRequest& WithWorkGroup(const char* value) { SetWorkGroup(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_workGroup;
    bool m_workGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws

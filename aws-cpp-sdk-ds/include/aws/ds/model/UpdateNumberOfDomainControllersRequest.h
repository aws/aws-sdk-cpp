/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   */
  class UpdateNumberOfDomainControllersRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API UpdateNumberOfDomainControllersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateNumberOfDomainControllers"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Identifier of the directory to which the domain controllers will be added or
     * removed.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>Identifier of the directory to which the domain controllers will be added or
     * removed.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>Identifier of the directory to which the domain controllers will be added or
     * removed.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>Identifier of the directory to which the domain controllers will be added or
     * removed.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>Identifier of the directory to which the domain controllers will be added or
     * removed.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>Identifier of the directory to which the domain controllers will be added or
     * removed.</p>
     */
    inline UpdateNumberOfDomainControllersRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>Identifier of the directory to which the domain controllers will be added or
     * removed.</p>
     */
    inline UpdateNumberOfDomainControllersRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>Identifier of the directory to which the domain controllers will be added or
     * removed.</p>
     */
    inline UpdateNumberOfDomainControllersRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>The number of domain controllers desired in the directory.</p>
     */
    inline int GetDesiredNumber() const{ return m_desiredNumber; }

    /**
     * <p>The number of domain controllers desired in the directory.</p>
     */
    inline bool DesiredNumberHasBeenSet() const { return m_desiredNumberHasBeenSet; }

    /**
     * <p>The number of domain controllers desired in the directory.</p>
     */
    inline void SetDesiredNumber(int value) { m_desiredNumberHasBeenSet = true; m_desiredNumber = value; }

    /**
     * <p>The number of domain controllers desired in the directory.</p>
     */
    inline UpdateNumberOfDomainControllersRequest& WithDesiredNumber(int value) { SetDesiredNumber(value); return *this;}

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    int m_desiredNumber;
    bool m_desiredNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws

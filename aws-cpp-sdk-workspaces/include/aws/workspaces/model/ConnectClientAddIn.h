/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes an Amazon Connect client add-in.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ConnectClientAddIn">AWS
   * API Reference</a></p>
   */
  class ConnectClientAddIn
  {
  public:
    AWS_WORKSPACES_API ConnectClientAddIn();
    AWS_WORKSPACES_API ConnectClientAddIn(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API ConnectClientAddIn& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The client add-in identifier.</p>
     */
    inline const Aws::String& GetAddInId() const{ return m_addInId; }

    /**
     * <p>The client add-in identifier.</p>
     */
    inline bool AddInIdHasBeenSet() const { return m_addInIdHasBeenSet; }

    /**
     * <p>The client add-in identifier.</p>
     */
    inline void SetAddInId(const Aws::String& value) { m_addInIdHasBeenSet = true; m_addInId = value; }

    /**
     * <p>The client add-in identifier.</p>
     */
    inline void SetAddInId(Aws::String&& value) { m_addInIdHasBeenSet = true; m_addInId = std::move(value); }

    /**
     * <p>The client add-in identifier.</p>
     */
    inline void SetAddInId(const char* value) { m_addInIdHasBeenSet = true; m_addInId.assign(value); }

    /**
     * <p>The client add-in identifier.</p>
     */
    inline ConnectClientAddIn& WithAddInId(const Aws::String& value) { SetAddInId(value); return *this;}

    /**
     * <p>The client add-in identifier.</p>
     */
    inline ConnectClientAddIn& WithAddInId(Aws::String&& value) { SetAddInId(std::move(value)); return *this;}

    /**
     * <p>The client add-in identifier.</p>
     */
    inline ConnectClientAddIn& WithAddInId(const char* value) { SetAddInId(value); return *this;}


    /**
     * <p>The directory identifier for which the client add-in is configured.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The directory identifier for which the client add-in is configured.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The directory identifier for which the client add-in is configured.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The directory identifier for which the client add-in is configured.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The directory identifier for which the client add-in is configured.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The directory identifier for which the client add-in is configured.</p>
     */
    inline ConnectClientAddIn& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The directory identifier for which the client add-in is configured.</p>
     */
    inline ConnectClientAddIn& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The directory identifier for which the client add-in is configured.</p>
     */
    inline ConnectClientAddIn& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The name of the client add in.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the client add in.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the client add in.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the client add in.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the client add in.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the client add in.</p>
     */
    inline ConnectClientAddIn& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the client add in.</p>
     */
    inline ConnectClientAddIn& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the client add in.</p>
     */
    inline ConnectClientAddIn& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The endpoint URL of the client add-in.</p>
     */
    inline const Aws::String& GetURL() const{ return m_uRL; }

    /**
     * <p>The endpoint URL of the client add-in.</p>
     */
    inline bool URLHasBeenSet() const { return m_uRLHasBeenSet; }

    /**
     * <p>The endpoint URL of the client add-in.</p>
     */
    inline void SetURL(const Aws::String& value) { m_uRLHasBeenSet = true; m_uRL = value; }

    /**
     * <p>The endpoint URL of the client add-in.</p>
     */
    inline void SetURL(Aws::String&& value) { m_uRLHasBeenSet = true; m_uRL = std::move(value); }

    /**
     * <p>The endpoint URL of the client add-in.</p>
     */
    inline void SetURL(const char* value) { m_uRLHasBeenSet = true; m_uRL.assign(value); }

    /**
     * <p>The endpoint URL of the client add-in.</p>
     */
    inline ConnectClientAddIn& WithURL(const Aws::String& value) { SetURL(value); return *this;}

    /**
     * <p>The endpoint URL of the client add-in.</p>
     */
    inline ConnectClientAddIn& WithURL(Aws::String&& value) { SetURL(std::move(value)); return *this;}

    /**
     * <p>The endpoint URL of the client add-in.</p>
     */
    inline ConnectClientAddIn& WithURL(const char* value) { SetURL(value); return *this;}

  private:

    Aws::String m_addInId;
    bool m_addInIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_uRL;
    bool m_uRLHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws

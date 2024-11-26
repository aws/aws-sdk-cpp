/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>A summary of a flow version's metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ContactFlowVersionSummary">AWS
   * API Reference</a></p>
   */
  class ContactFlowVersionSummary
  {
  public:
    AWS_CONNECT_API ContactFlowVersionSummary();
    AWS_CONNECT_API ContactFlowVersionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ContactFlowVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the view version.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ContactFlowVersionSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ContactFlowVersionSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ContactFlowVersionSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the flow version.</p>
     */
    inline const Aws::String& GetVersionDescription() const{ return m_versionDescription; }
    inline bool VersionDescriptionHasBeenSet() const { return m_versionDescriptionHasBeenSet; }
    inline void SetVersionDescription(const Aws::String& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = value; }
    inline void SetVersionDescription(Aws::String&& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = std::move(value); }
    inline void SetVersionDescription(const char* value) { m_versionDescriptionHasBeenSet = true; m_versionDescription.assign(value); }
    inline ContactFlowVersionSummary& WithVersionDescription(const Aws::String& value) { SetVersionDescription(value); return *this;}
    inline ContactFlowVersionSummary& WithVersionDescription(Aws::String&& value) { SetVersionDescription(std::move(value)); return *this;}
    inline ContactFlowVersionSummary& WithVersionDescription(const char* value) { SetVersionDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the flow version.</p>
     */
    inline long long GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }
    inline ContactFlowVersionSummary& WithVersion(long long value) { SetVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_versionDescription;
    bool m_versionDescriptionHasBeenSet = false;

    long long m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

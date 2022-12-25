/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
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
namespace GlueDataBrew
{
namespace Model
{

  /**
   * <p>Contains additional resource information needed for specific
   * datasets.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/Metadata">AWS
   * API Reference</a></p>
   */
  class Metadata
  {
  public:
    AWS_GLUEDATABREW_API Metadata();
    AWS_GLUEDATABREW_API Metadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Metadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) associated with the dataset. Currently,
     * DataBrew only supports ARNs from Amazon AppFlow.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the dataset. Currently,
     * DataBrew only supports ARNs from Amazon AppFlow.</p>
     */
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the dataset. Currently,
     * DataBrew only supports ARNs from Amazon AppFlow.</p>
     */
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the dataset. Currently,
     * DataBrew only supports ARNs from Amazon AppFlow.</p>
     */
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the dataset. Currently,
     * DataBrew only supports ARNs from Amazon AppFlow.</p>
     */
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the dataset. Currently,
     * DataBrew only supports ARNs from Amazon AppFlow.</p>
     */
    inline Metadata& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) associated with the dataset. Currently,
     * DataBrew only supports ARNs from Amazon AppFlow.</p>
     */
    inline Metadata& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) associated with the dataset. Currently,
     * DataBrew only supports ARNs from Amazon AppFlow.</p>
     */
    inline Metadata& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}

  private:

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
